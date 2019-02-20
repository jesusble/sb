#include<stdio.h>
int main()
{
int i,n,t=0,t1=1,next;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;++i)
{
printf("%d",t1);
next=t+t1;
t=t1;
t1=next;
}
return 0;
}
