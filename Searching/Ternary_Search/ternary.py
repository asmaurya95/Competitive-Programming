List = [1,2,3,4,5]
Found = False
first = 0
last = 4
mid = 0

key = int(raw_input("Enter a number between 1 - 5\n->"))

while not Found and first <= last:
	mid1 = first + ((last-first)/3)
	mid2 = last - ((last-first)/3)
	if List[mid1] == key:
		Found = True
		mid = mid1
	if List[mid2] == key:
		Found = True
		mid = mid2
	if key < List[mid1]:
		last = mid1 - 1
	elif key > List[mid2]:
		first = mid2+1
	else:
		first = mid1+1
		last = mid2-1

if Found == True:
	print "Key found at %d" % (mid + 1)
else:
	print "Key not found"
