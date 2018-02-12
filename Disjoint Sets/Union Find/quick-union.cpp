#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,N)	for(int i=0;i<N;i++)
#define loop_(i,N)	for(int i=1;i<=N;i++)

int root(int ar[],int i){
	while(i!=ar[i])	i=ar[i];
	return i;
}

int find(int ar[],int a){
	return root(ar,a);
}

void union_of(int ar[],int a,int b){
	int key=root(ar,b);
	ar[root(ar,a)]=key;
}

int main(){
	int n,a,b;
	cin>>n; // no. of elements/sets at start	
	int q;
	cout<<"Enter no. of union operations: ";
	cin>>q;
	int A[n+1];
	loop_(i,n)	A[i]=i;
	cout<<"Enter pair for union:\n";
	while(q--){
		cin>>a>>b;
		union_of(A,a,b);
	}
	loop_(i,n)	cout<<A[i]<<" ";
	cout<<endl;
	cout<<"Enter no. of find queries: ";
	cin>>q;
	cout<<"Enter find pairs:\n";
	while(q--){
		cin>>a>>b;
		if(find(A,a)==find(A,b))	cout<<"In same Set\n";
		else
			cout<<"In different Sets\n";
	}	
	return 0;
}
