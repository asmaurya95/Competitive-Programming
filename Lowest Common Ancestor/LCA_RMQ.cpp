/* Author : Ashutosh Maurya
*/
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#define MAX 100 // Let this be maximum number of nodes in our Binary Tree
#define max(a,b) ( (a>b)?a:b )
#define min(a,b) ( (a<b)?a:b )

int euler[2*MAX - 1]; // Euler Tour Array ( DFS Traversal in a Tree )
bool visited[MAX+1]; // Level of Nodes in Tour Array
int first[MAX+1];	// To Store the idx of first occuurence of the node in Euler Tour
int idx,nodes;
int segtree[2*MAX - 1];

void initialize(){
	int i;
	for(i=0;i<=(2*MAX-2);i++){
		if(i<=MAX)	
			first[i]=-1,visited[i]=false;
		euler[i]=0,segtree[i]=0;
	}
}

void build(int node,int start,int end){
	int mid;
	if(start==end)
		segtree[node]=euler[start];
	else {
		mid=(start+end)/2;
		build(2*node,start,mid); // left sub Segment tree
		build(2*node+1,mid+1,end);	// right sub Segment tree
		int x=segtree[2*node];
		int y=segtree[2*node+1];
		segtree[node]=(x>y)?y:x;
	}
}

int query (int node,int start,int end, int l, int r){
	int mid,x,y;
	if(r<start || end<l)
		return INT_MAX;
	if(l<=start && end<=r)
		return segtree[node];
	mid=(start+end)/2;
	x=query(2*node,start,mid,l,r);
	y=query(2*node+1,mid+1,end,l,r);
	return ((x>y)?y:x);
}

void dfs_eulertour(int node,int l){
	if(node <= nodes){
		euler[idx]=node;
		idx++;

		if(visited[node]==false){
			visited[node]=true;
			first[node]=idx-1;
		}
		// Left SubTree
		if(2*node <= nodes){
			dfs_eulertour(2*node,l+1);
			euler[idx]=node;
			idx++;
		}
		// Right Subtree
		if((2*node+1) <= nodes ){
			dfs_eulertour(2*node+1,l+1);
			euler[idx]=node;
			idx++;
		}
	}
}

int findLCA(int u,int v){
	int i;
	idx=0;
	dfs_eulertour(1,0);
	printf("Euler-Tour Array : ");
	for(i=0;i<(2*nodes-1);i++){
		printf("%d ",euler[i]);
	}
	printf("\n");
	build(1,0,2*nodes-2); // Building Segment Tree from Euler Tour
	return query(1,0,2*nodes-2,min(first[u],first[v]),max(first[v],first[u]));
}

int main() {
	int t,u,v;
	printf("Enter the number of nodes in the Binary Tree : ");
	scanf("%d",&nodes);
	printf("Enter the Number of Queries on Binary Tree : ");
	scanf("%d",&t);
	while(t--){
		initialize();
		printf("Find LCA of two nodes (U,V) : ");
		scanf("%d%d",&u,&v);
		printf("%d\n",findLCA(u,v));
	}
	return 0;
}
