#include <stdio.h>
int main()
{
int n, revNumber = 0, rem;
printf("Enter an integer: ");
scanf("%d", &n);
while(n != 0)
{
 rem = n%10;
 revNumber = revNumber*10 + rem;
 n /= 10;
 }
 printf("Reversed Number = %d", revNumber);
 return 0;
}

