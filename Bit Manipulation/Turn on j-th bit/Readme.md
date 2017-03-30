# How to set/turn on j'th bit 

To set/turn on the j-th item (0-based indexing) of the set,
use the bitwise OR operation S |= (1 << j) , where S is the given Decimal Number . 

Note : 0 based indexing starts from the right i.e. the least significant bit .

## Example 

S = 34 (base 10) = 100010         (base 2)

j = 3, 1 << j = 001000           <- bit ‘1’ is shifted to the left 3 times

              -------- OR (true if either of the bits is true)
                   
S = 42 (base 10) = 101010 (base 2) // update S to this new value 42

( This example has been taken from the book Competitive Programming 3 )
