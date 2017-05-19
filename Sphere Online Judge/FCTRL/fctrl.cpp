#include <bits/stdc++.h>
using namespace std;
// for hints, search trailing zeroes-brilliant.org

int main() {
	int t;
	cin>>t;
	unsigned long int n;
	while(t--){
		cin>>n;
		unsigned int count=0;
		for(unsigned long int i=5;i<=n;i*=5){
			count+=n/i;
		}
		cout<<count<<endl;
	}
	return 0;
} 
