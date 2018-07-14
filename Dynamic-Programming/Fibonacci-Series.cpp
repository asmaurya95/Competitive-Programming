#include<bits/stdc++.h>
using namespace std;

int main()
{
  vector <long int> fib;
  long int n;
  cout<<"Enter the length of fibonacci series to print :";
  cin>>n;
  fib.push_back(0);
  fib.push_back(1);
  for(long int i=2;i<=n;i++)
  {
    fib.push_back(fib[i-1]+fib[i-2]); //Here I am using the values stored in the past, reducing the time at cost of more space (Compared to top down Recursive Solution)
  }
  //Printing the Series
  for(long int i=0;i<fib.size();i++)
  {
    cout<<fib[i]<<", ";
  }
  return 0;
}

  
