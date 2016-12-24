#Quick Sort

Quick Sort is a sorting algorithm based on Divide & Conquer approach
The Algorithm is described below. It consists of two parts as described below.

##Algorithm

** Initial Function Call : QuickSort(A,0,n-1) //Considering 0 based Index, Array A[0....n-1]

1.Quicksort(A,p,r) //A:list, p:starting position, q:ending position
2.if p<r then
3.  q=Partition(A,p,r)  //Calling Partition to select a Pivot and partition the list A
4.  Quicksort(A,p,q-1)
5.  Quicksort(A,q+1,r)

1.Partition(A,p,r)
2.  let x=A[p] be the Pivot element
3.  Integer i=p
4.  for integer j=p+1 to r , run a loop incrementing j by 1 every time
5.    if A[j] <= x
6.      i=i+1 //Incremented by 1
7.      then exchange A[i] with A[j]
8.  exchange A[i] with A[p] //This will put the Pivot Element to it's correct spot
9.  return i //The position of Pivot  
  
##Complexity
  
###Time Complexity
Best Case: O(nlogn)
Average Case: O(nlogn)
Worst Case: O(n^2) 
  
###Space Complexity
Quick Sort has a space complexity of O(logn)  
