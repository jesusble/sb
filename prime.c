#include<stdio.h>
#include<conio.h>
int s,b,i,flag=0;
printf("enter the interval");
scanf(&s,&b);
for(i=2;i<s%2;i++)
{
if(s%i==0)
{
flag=1;
break;
}
}
if(n==1)
{
printf("the number neither composite or prime number");
else
{
if(n==s)
printf("it is a prime number");
else
printf("it is not a prime number");
}
}
