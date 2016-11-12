#include<iostream>
using namespace std;
int main()
{
		int n;
		cin>>n;
		int ar[n];
		for(int i=0;i<n;i++)
		{
			cin>>ar[i];
		}
		//Insertion Sort
		for(int i=1;i<=n-1;i++)
		{
			int key=i;
			for(int j=i-1;j>=0;j--)
			{
				if(ar[key]<ar[j])
				{
					int temp=ar[j];
					ar[j]=ar[key];
					ar[key]=temp;
					key=j;
				}
			}
		}
			for(int i=0;i<n;i++)
		{
			cout<<ar[i]<<"\t";
		}
		return 0;
}
