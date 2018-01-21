/*
  Input a set of strings (for a dictionary) and then search any given string from this set 
  in O(n) time ( both insertion and searching)
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,N) for(int i=0;i<N;i++)
#define loop_(i,N) for(int i=1;i<=N;i++)

struct TrieNode{
	TrieNode* child[26];
	bool islast; 
};

TrieNode* createNode(){
	TrieNode* node=new TrieNode;
	node->islast=false;
	loop(i,26)	node->child[i]=NULL;
	return node;
}

void trieInsert(string word,TrieNode* node){
	int len=word.length();
	// initially at level 0
	loop(i,len){
		if(node->child[word[i]-'a']==NULL)
			node->child[word[i]-'a']=createNode();
		node=node->child[word[i]-'a'];	// corresponding child node is now current node
	}
	node->islast=true;
}

bool isPresent(TrieNode* node,string key){
	int len=key.length();
	// initially at level 0
	loop(i,len){
		if(node->child[key[i]-'a']==NULL)
			return false;
		node=node->child[key[i]-'a'];
	}
	if(node->islast)	return true;
}

int main(){
	TrieNode* root=createNode();
	string str;
	int n,q;
	cin>>n;
	loop(i,n)	cin>>str, trieInsert(str,root);
	cin>>q;
	while(q--){
		cin>>str;
		if(isPresent(root,str))
			cout<<str<<" is present\n";
		else
			cout<<str<<" isn't present\n";
	}
	return 0;
}
