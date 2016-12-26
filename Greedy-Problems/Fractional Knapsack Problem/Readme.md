#Fractional Knapsack Problem

##Problem Statement

A Thief enters a house and finds a lot of times to steal, but encounters a problem.The Problem is that, he can't takeaway all of the items 
in the house.There are N items, costing C[0]....C[n-1] each and having Weights W[0].....W[n-1]. The Maximum Weight that his Knapsack can withhold
is Max-Weight.Find the maximum amount the thief can make by stealing the items .The Thief is allowed to steal fraction of an item , unlike the 0-1 Knapsack Problem.

##Solution

The Solution to this problem can be achieved by using a Greedy Approach.

###Algorithm

// Initially, Max-Steal = 0 

1.  Find the C/W for every item in the house and sort them in increasing order of the ratio

2.  Take the maximum fraction of the first item in the list and add it to the knapsack & Max-Steal = Max-Steal + ( C/W * Fraction taken ) 

3.  Keep repeating the Second Step until either the Knapsack is Full (Max-Weight) or no more items are there in the house

4.  Print Max-Steal 
