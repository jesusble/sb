#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 int n,t=0,s,p;
 printf("Enter the number ");
 scanf("%d",&n);
 p=n;
 do
 {
      r=p%10;
      t=t+pow(s,2);
      p=p/10;
 }
 while(p%10!=0);
 printf("%d",t);
 getch();
}
