#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int max(int a, int b) {
	return (a > b)? a : b;
}

int cutRod (int price[], int n) {
	if(n <= 0)
		return 0;
	int max_val = INT_MIN;

	for(int i = 0 ; i < n; i ++) 
		max_val = max(max_val, price[i] + cutRod(price, n - i - 1));

	return max_val;
}

int main() {
	printf("Enter total number of rod values\n");
	int n;
	scanf("%d",&n);

	printf("Enter the cost of cutting the rod\n");
	int arr[n];
	for(int i = 0; i < n ; i ++)
		scanf("%d",&arr[i]);

	printf("Maximum value of rod is %d\n",cutRod(arr,n));

	return 0;
}