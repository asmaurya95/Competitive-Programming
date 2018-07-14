/*
	There are n numbers in [1..n]. You're given a set containing n-1 of them. Find the one missing.

	Time O(N) 
	Auxillary Space O(1)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,N)	for(int i=0;i<N;i++)
#define loop_(i,N)	for(int i=1;i<=N;i++)

int main() {
	int n;
	cin >> n;
	int num;
	int ans = 0;
	for (int i = 1; i <= n; i++) ans ^= i;
	for (int i = 1; i <= n - 1; i++) {
		cin >> num;
		ans ^= num;
	}
	cout << ans << endl;
	return 0;
}