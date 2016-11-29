
List = [1,2,3,4,5]

position = 0
found = False

key = int(raw_input("Enter the number you want to search \n-> "))

while position < len(List) and not found:
	if List[position] == key:
		found = True
		print "Number %d found at position %d" %(key, position + 1)
	position += 1

if found == False:
	print "Number %d doesn't exist in the list" %key