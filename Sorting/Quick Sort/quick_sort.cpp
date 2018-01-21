#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,N) for(int i=0;i<N;i++)
#define loop_(i,N) for(int i=1;i<=N;i++)

vector <int> ar;

int partition(int low,int high){
	int pivot=ar[high];
	int wall=low-1,temp;
	while(low<high){
		if(ar[low]<=pivot){
			++wall;
			temp=ar[wall];
			ar[wall]=ar[low];
			ar[low]=temp;
		}
		++low;
	}
	wall++;
	temp=ar[wall];
	ar[wall]=pivot;
	ar[high]=temp;
	return wall;
}

void quick_sort(int low,int high){
	if(low<high){
		int wall=partition(low,high);
		quick_sort(low,wall-1);
		quick_sort(wall+1,high);
	}
}

int main(){
	int num;
	int n;
	cout<<"Enter no. of elements to be sorted: ";
	cin>>n;
	cout<<"\nEnter elements: ";
	loop(i,n)	cin>>num, ar.push_back(num);
	quick_sort(0,ar.size()-1);
	cout<<"\nSorted: ";
	loop(i,n)	cout<<ar[i]<<" ";
	cout<<endl;
	return 0;
}
