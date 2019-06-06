def  largest(arr,n): 
    max = arr[0]
    for i in range(1, n): 
        if arr[i] > max: 
            max = arr[i] 
    return max
arr =int(input())
for i in range(1,arr):
	arr1=int(input())
	n = len(arr) 
    Ans = largest(arr1,n) 
    print ("Largest in given array is",Ans) 
