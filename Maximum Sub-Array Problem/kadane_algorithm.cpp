#include <iostream>
#include <math.h>
using namespace std;

int kadane(int A[],int n) {
    int max_current=A[0];
    int max_global=A[0];
    for(int i=1;i<n;i++) {
        max_current=fmax(A[i],max_current+A[i]);
        if(max_current>max_global)
            max_global=max_current;
    }
    return max_global;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    int max_subarray=kadane(ar,n);
    cout<<max_subarray;
    return 0;
} 
