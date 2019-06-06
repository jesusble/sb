def multiple(m, n): 
    a = range(n, (m * n)+1, n) 
    print(*a) 
m =int(input())
n = int(input())
multiple(m, n) 
