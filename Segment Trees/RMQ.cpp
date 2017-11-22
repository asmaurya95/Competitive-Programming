#include <stdio.h>
#include <limits.h>
#define MAX 101
int n,segtree[MAX],arr[MAX];

void build(int node,int start,int end){
	int mid;
	if(start==end)
		segtree[node]=arr[start];
	else {
		mid=(start+end)/2;
		build(2*node,start,mid); // left sub tree
		build(2*node+1,mid+1,end);	// right sub tree
		int x=segtree[2*node];
		int y=segtree[2*node+1];
		segtree[node]=(x>y)?y:x;
	}
}

void update(int node,int start,int end,int idx,int val){
	if(start==end){
		arr[idx]+=val;
		segtree[node]+=val;
		//printf("%d %d\n",node,start);
	}
	else{
		int mid=(start+end)/2;
		if(start<=idx and idx<=mid){
			update(2*node,start,mid,idx,val); // left sub tree
		}
		else
			update(2*node+1,mid+1,end,idx,val); // right sub tree
			
			int x=segtree[2*node];
			int y=segtree[2*node+1];
			segtree[node]=((x>y)?x:y); 
	}
}

int query (int node,int start,int end, int l, int r){
	int mid,x,y;
	if(r<start or end<l)
		return INT_MAX;
	if(l<=start and end<=r)
		return segtree[node];
	mid=(start+end)/2;
	x=query(2*node,start,mid,l,r);
	y=query(2*node+1,mid+1,end,l,r);
	return ((x>y)?y:x);
}

int main(){
	int i;
	printf("Enter the no. of Array elements : ");
	scanf("%d",&n);
	printf("Enter %d Integers : ",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	build(1,0,n-1);
	for(i=0;i<10;i++){
		int x;
		printf("Choose \n1.Update 2.Query\n");
		scanf("%d",&x);
		if(x==1){
			printf("Enter index, value: ");
			int idx,val;
			scanf("%d%d",&idx,&val);
			update(1,0,n-1,idx,val);
		}
		else{
			int l,r;
			printf("Enter l,r: ");
			scanf("%d%d",&l,&r);
			printf("%d\n",query(1,0,n-1,l,r));
			for(int i=1;i<2*n;i++)
				printf("%d ",segtree[i]);
		}
	}
	return 0;
}
