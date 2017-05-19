# Sieve of Eratosthenes

This is an ancient algorithm used for finding all the prime numbers upto a given number N.The prime numbers are identified by indentifying all the composite numbers upto N.
We start from 2, initially all numbers upto N unmarked.Then , if a number is unmarked, all it's multiples <= N are marked (composite).

## Pseudo Code

1. Take an array , arr[N] = {0} //All unmarked
2. Run Loop, for i from 2 to square_root(N) : 
3. if arr[i] equals 0 :
4. Run Loop, for j from 2 to N :
5. if i*j > N :
6. ( Break this Loop )
7. arr[i*j] = 1 // Every multiple is marked composite

## Problems with this method

If the number N is too large, the array of size O(N) will not fit in the memory
