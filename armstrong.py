low = int(input(""))
up = int(input(""))
for num in range(low,up + 1):
   sum = 0
   temp = num
   while temp > 0:
       digit = temp % 10
       sum += digit ** 3
       temp //= 10
       if num == sum:
       	print(num)
