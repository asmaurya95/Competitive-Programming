# Ternary Search

## About

- Ternary Search is used to find an item in a list.
- The items do have to be sorted like in Binary Search.
- The Algorithm is similar to the case of Binary Search but in this case instead of dividing the array into two sub-arrays it is divided into 3 sub-arrays and the element is found out accordingly.
- It is a Divide-And-Conquer Algorithm
- In this search, after each iteration it neglects 1/3 part of the array and repeats the same operation on the remaining 2/3. 

## PseudoCode

1.	Found <- False
2.	while not Found and First <= Last
3. 		Mid1 <- First + (Last-First) DIV 3
4. 		Mid2 <- Last - (Last-First) DIV 3
5. 		If List[Mid1] == Key
6. 			Found = True
7.		If List[Mid2] == Key	
8. 			Found = True
9. 		If Key > List[Mid1]
10.			Last = Mid1 - 1
11.		Elif Key > List[Mid2]:
12.			First = Mid2 + 1
13. 	Else:
14. 		First = Mid1+1
15,			Last = Mid2-1

## Time Complexity

The Worst-case time Complexity of Ternary Search is O(n).
