//bubbleSorting
#include<bits/stdc++.h>
using namespace std;
int main()
{
		long int n;
		cin>>n;
		long int ar[n];
		for(long int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		long int temp;
		for(long int i=0;i<n-1;i++)
		{
			for(long int j=0;j<n-i-1;j++)
			{
				if(ar[j]>ar[j+1]) //then Swap the values
				{
					temp=ar[j+1];
					ar[j+1]=ar[j];
					ar[j]=temp;
				}
			}
		}
		//Printing Results of Sorted List
		for(long int i=0;i<n;i++)
		{
			cout<<ar[i]<<"\t";
		}
		return 0;
}
