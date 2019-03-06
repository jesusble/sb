# include <stdio.h> 
# include <math.h> 
void prime(int m) 
{
while (n%2 == 0) 
{ 
   printf("%d ", 2); 
   m = m/2; 
 } 
 for (int i = 3; i <= sqrt(m); i = i+2) 
 { 
 while (m%i == 0) 
   { 
      printf("%d ", i); 
      m = m/i; 
    } 
 } 
 if (m > 2) 
    printf ("%d ", n); 
}
int main() 
{ 
    int m = 315; 
    prime(m); 
    return 0; 
