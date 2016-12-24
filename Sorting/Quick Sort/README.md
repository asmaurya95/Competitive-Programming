#Quick Sort

Quick Sort is a sorting algorithm based on Divide & Conquer approach
The Algorithm is described below. It consists of two parts as described.

##Algorithm

** Initial Function Call : QuickSort(A,0,n-1) //Considering 0 based Index, Array A[0....n-1]

Quicksort(A,p,r) //A:list, p:starting position, q:ending position
if p<r then
  q=Partition(A,p,r)  //Calling Partition to select a Pivot and partition the list A
  Quicksort(A,p,q-1)
  Quicksort(A,q+1,r)

Partition(A,p,r)
  let x=A[p] be the Pivot element
  Integer i=p
  for integer j=p+1 to r , run a loop incrementing j by 1 every time
    if A[j] <= x
      i=i+1 //Incremented by 1
      then exchange A[i] with A[j]
  exchange A[i] with A[p] //This will put the Pivot Element to it's correct spot
  return i //The position of Pivot  
