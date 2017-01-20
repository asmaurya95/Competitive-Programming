/* This is the Solution to the Problem Statement given in the README file .
There can be multiple ways to solve this problem.
Let N be no. of elements in Set S.
In this Solution , we will assume that N is small and
O(2^N) solution is feasible. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
  int K;      // The Value to be inputted by the user	
  int mask=0; //Initially, mask=0 means that the number of elements in the subset at start is ZERO
	int cnt=0;  //Counter, to count the no. of subsets whose sum=K
	int N;      //No. of Elements in the Original Set S
	
  cout<<"Enter the No. of elements ......: ";
  cin>>N;
	
  int S[N];
  cout<<"Enter the Set S...: \n";
	
  for(int i=0;i<N;i++)
		cin>>S[i];
	
  cout<<"Enter the value K : ";
  cin>>K;
	
  while(mask<(1<<N)){               //Since total No. of subsets are 2^N, so 1<<N 
		int sm=0;
		for(int i=0;i<N;i++){
			if(mask&(1<<i)){              //Checking if i'th bit is set
				sm+=S[i];
			}
		}
		if(sm==K)
			cnt++;
		mask++;
	}
	
  cout<<cnt<<endl;
	return 0;
}  
