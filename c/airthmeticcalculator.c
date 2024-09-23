#include<stdio.h>

void main()
{
long long int a,b,c;
char choice;
printf("press +,-,*,/");
scanf("%c",&choice);
printf("\nenter two no.");
scanf("%lld%lld",&a,&b);
switch(choice)
{
case '+':
c=a+b;
break;
case '-':
c=a-b;
break;
case '*':
c=a*b;
break;
case '/':
c=a/b;
break;
  
}
printf("\n\nanswer is : %lld",c);
}