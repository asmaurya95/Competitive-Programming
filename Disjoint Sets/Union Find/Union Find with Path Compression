// Weighted Union Find Algorithm for solving Dynamic Connectivity Problem
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define loop(i,N)	for(int i=0;i<N;i++)
#define loop_(i,N)	for(int i=1;i<=N;i++)

int w[6], id[6];

int root(int node) {
	int r = id[node];
	while (r != node) {
		node = r;
		r = id[node];
	}
	return r;
}

int find(int node) {
	return root(node);
}

void quick_union(int i, int j) {
	int r1 = root(i);
	int r2 = root(j);
	if (r1 == r2) {
		return;
	}
	if (w[r1] < w[r2]) {
		id[r1] = r2;
		w[r2] += w[r1];
	}
	else {
		id[r2] = r1;
		w[r1] += w[r2];
	}
}

void initialize() {
	for (int i = 1; i <= 5; ++i)
	{
		/* code */
		id[i] = i;
		w[i] = 1;
	}
}

int main() {
	initialize();
	quick_union(1, 5);
	quick_union(2, 3);
	quick_union(4, 5);
	cout << find(3) << endl;
	quick_union(4, 2);
	cout << find(3) << endl;
	return 0;
}
