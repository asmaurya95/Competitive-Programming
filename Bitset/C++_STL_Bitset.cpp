#include <bits/stdc++.h>
using namespace std;

#define MAX 10
bitset<MAX> bs;
int main() {
	cout<<bs<<endl; 	//will print the entire bitset
	bs[0]=1;	//O(1) access to each boolean value , indexing starts from least significant bit/rightmost bit
	cout<<bs<<endl;
	return 0;
} 
