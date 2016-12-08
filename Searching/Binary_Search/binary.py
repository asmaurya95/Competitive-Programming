List = [1,2,3,4,5]
Found = False
first = 0
last = 4

key = int(raw_input("Enter the number between 1 - 5\n-> "))

while not Found and first <= last:
	mid = (first + last) / 2
	if List[mid] == key:
		Found = True
	elif List[mid] > key:
		last = mid - 1
	else:
		first = mid + 1

if Found == True:
	print "Key found at %d" % (mid + 1)
else:
	print "Key not found"