#Activity Selection

##Problem Statement

Given n Activities , and their starting and finish times , find the maximum number of activities that can be performed
within the given interval of time

##Solution

The Activity Selection Problem can be solved using Greedy Approach, where we select the best available option for us at a given instant.
Here, the activity that finishes first is our greedy choice since then, we will have maximum time left to perform most number of 
activities.
The implementation could be done in two ways:

+ Iterative Method
+ Recursive Method

###Algorithm Iterative 

//Sort all the activities according to their finish times , with ones finishing early at the start. 

//Let A be the list of Activities selected. Intially A is EMPTY .

GREEDY-ACTIVITY-SELECTOR (s , f)  // s and f denote the starting and finishing times of the sorted list of activities

1 n = s.length 

2 A = {a1}  // Selected first activity  

3 k = 1     // This Variable is used to highlight the activity that was last selected

4 for m=2 to n run loop,

5     if s[m] >= f[k]

6         A = A U {m'th activity} // Added m'th Activity to the list of selected activities

7         k = m

8 return A 

