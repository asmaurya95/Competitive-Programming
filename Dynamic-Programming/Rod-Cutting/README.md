# Rod Cutting

## Problem Statement

- Given a rod of n inches/ metres and an array of prices that contains prices of all pieces of size smaller than or equal to n. Find the maximum price that can be obtained from the rod by cutting it into various pieces.

## Optimal Substructure
- The best price can be obtained by making a cut at different positions and comparing the values obtained after a cut.
- If we assume cutRod as the best possible value of a rod for length n, cutRod(n) can be defined as:

`cutRod(n) = max(price[i] + cutRod(n-i-1)) \/ i in {0,n-1}`