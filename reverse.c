#include<stdio.h>
int main()
{
int i,rev=0,n;
printf("enter a number");
scanf("%d",&n);
for(i=0;i<n;i++)
{
rev=rev*10;
rev=rev+n%10;
n=n/10;
}
printf("the reversed number is",rev);
getch();
}
