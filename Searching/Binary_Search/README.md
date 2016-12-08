# Binary Search

## About
- Binary Search is valid only for **ordered lists** i.e. lists that are either in ascending or descending order.
- To search for an item, first it checks the the middle element.
- If the middle element is the element to be found, return that element.
- Else if the element to be found is greater than the element 'key', then start the list from one element greater than the middle element.
- Else end the element from one element smaller than the middle element.


## Pseudo Code

1.	Found <- False
2.	while not Found and first <= last
3. 	Mid <- (First + Last) DIV 2
4. 	If List[Mid] = Key Then
5. 		Found <- True
6. 	Else
7.		If First >= Last Then
8. 			SearchFailed <- True
9. 		Else	
10.			If List[Mid] > Item Then
11.				Last <- Mid - 1
12.			Else
13. 			First <- Mid + 1
14. 		Endif
15,		Endif
16.	Endif

