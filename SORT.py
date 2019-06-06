S=[]
N=int(input())
for i in range(0,N):
	A=int(input())
	S.append(A)
	S.sort()
print(list(reversed(S)))
