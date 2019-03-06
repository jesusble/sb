#include <bits/stdc++.h> 
using namespace std; 
int sum(int n) 
{  
int res = 1; 
while (n % 2 == 0) 
n = n / 2; 
for (int i = 3; i <= sqrt(n); i++)  
{ 
int count = 0, c_sum = 1 
int c_term = 1; 
while (n % i == 0) { 
count++; 
n = n / i; 
c_term *= i; 
c_sum += c_term; 
} 
res *= c_sum; 
} 
if (n >= 2) 
res *= (1 + n); 
return res; 
} 
int main() 
{ 
    int n = 30; 
    cout << sum(n); 
    return 0; 
 }
