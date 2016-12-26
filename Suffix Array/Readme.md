#Suffix Array

Suffix Array is a sorted array of all the suffixes of a given string.
As a data structure, it is widely used in areas such as data compression, bioinformatics and, in general, in any area that deals with strings and string matching problems, so,it is of great importance to know efficient algorithms to construct a suffix array for a given string.
There are multiple approaches of constructing a suffix array.

##Naive Approach
The key idea of the naive algorithm is using a good comparison-based sorting algorithm to sort all the suffixes of a given string in the fastest possible way. 
Quick-sort does this task very well.However, we can also use a vector ( a container in C++ STL ) and other built in C++ STL functions like sort() and 
built in C++ classes like maps ( an alternative to using Hash Tables which would need more work) to achieve the same.

The Time Complexity of the Naive Implementation of Suffix Arrays is O((N^2)logN) .
