limit=int(input())
sum=0
for i in range(0,limit):
	value=int(input())
	sum=sum+value
	avg=sum/limit
print(avg)
