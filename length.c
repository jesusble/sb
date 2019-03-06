#include <stdio.h>
int main()
{
char st[100],i;
printf("Enter a string: \n");
scanf("%s",st);
for(i=0; st[i]!='\0'; ++i);
printf("\nLength of input string: %d",i);
return 0;
}
