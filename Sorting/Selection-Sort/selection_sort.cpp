//selectionSort
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
	for(int i=0;i<n-1;i++)
	{
		int j=i+1;
		int min=i;
		while(j<n)
		{
			if(ar[j]<ar[min])
				min=j;
			j++;
		}
		if(ar[min]<ar[i])
		{
			int temp=ar[min];
			ar[min]=ar[i];
			ar[i]=temp;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<ar[i]<<"\t";
	}
	return 0;
		
}
