#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define loop(i,N) for(int i=0;i<N;i++)
#define loop_(i,N) for(int i=1;i<=N;i++)
// NOTE : Correct Answer Only Possible till 2^64 - 1 

ull exp_recursive(ull a,ull n) {
	if(n==0)	return 1;
	else if(n==1)	return a;
	else if(n%2==0){
		ull temp=exp_recursive(a,n/2);
		return temp*temp;
	}
	else{	// for n ODD
		ull temp=exp_recursive(a,(n-1)/2);
		return temp*temp*a;
	}
}

int main(){
	int a,n;
	cin>>a>>n;
	cout<<exp_recursive((ull)a,(ull)n)<<endl;	
	return 0;
}
