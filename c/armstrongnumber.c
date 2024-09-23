#include<stdio.h>
void main()
{
int n,n1,result=0,digit;
printf("enter any no.:");
scanf("%d",&n);
n1 = n;
while(n!=0)
{
digit = n % 10;
result=result+(digit*digit*digit);
n = n/10;    
}
if (n1 == result)
printf(" yes it is armstrong no.");
else
printf("not armstrong no.");
}

