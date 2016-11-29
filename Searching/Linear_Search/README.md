# Linear Search

## About
- Linear Search is used to find an item in a list.
- The items do not necessarily have to be sorted like in Binary Search.
- To search for an item, start at the beginning and continue searching until either the end of the list is reached or the item is found.

## Algorithm
1. position <- 0
2. found <- False
3. while position < len(List) and not found:
4. 	if List[position] = item:
5.		found <- True
6.	position <- position + 1

## Time Complexity

The Worst-case time Complexity of LInear Search is O(n).