list = [20,30,20,30,40,50,15,11,20,40,50,15]
list.sort()
for i in range (len (list) -1):
 	if list[i] == list[i+1]:
     print(list[i])
