/*Naive Algorithm for contsruction of suffix array of a given string
  Time Complexity: O((N^2)logN)*/
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	string s;
	cin>>s;
	map<string,int> m;
	vector <string> ar;
	for(int i=0;i<s.size();i++){
		string sstr=s.substr(i,s.size()-i);
		m[sstr]=i;
		ar.push_back(sstr);
	}
	sort(ar.begin(),ar.end());
	for(int i=0;i<ar.size();i++){
		cout<<m[ar[i]]<<endl;
	}
	return 0;
}
