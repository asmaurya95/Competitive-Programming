# Quick Sort

Quick Sort is a sorting algorithm based on Divide & Conquer approach.

## Algorithm

The idea is to break the the array into an non-overlapping set of elements (sub-array) , sort each of the subarrays and combine them.The Quick Sort Algorithm could be divided into two different parts (functions/methods) namely, QuickSort and Partition. The Partition function basically finds the place of a randomly chosen pivot in the given array. The array is partitioned in a way such that all the elements lesser than (or equal to) are on the left of the pivot and the rest of elements are on the right. We can recursively call this function from the QuickSort function.To know more, visit https://www.commonlounge.com/discussion/608c5c7284b148eb9d550e6166303142 
  
## Time Complexity

One way to look at it that, we are partitioning the array into two parts each time, resulting into O(logn) partition steps ,in  average case/best case and O(n) partition steps in worst case, when all the elements are on one side of randomly chosen pivot. We observe that each of these partition steps has O(n) elements to be sorted. Hence, 

Best Case: O(nlogn)

Average Case: O(nlogn)

Worst Case: O(n^2) 
  
## Space Complexity

Quick Sort has a space complexity of O(logn)  
