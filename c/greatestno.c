#include<stdio.h>
#include<conio.h>
void main()
{
    long int a,b;
    printf("enter two numbers\n");
    scanf("%ld%ld",&a,&b);
   if  (a>b)
   { printf("a is greatest=%ld",a); }
   else if (a<b)  {
printf("b is greatest=%ld",b);  }  
else
{printf("both are equal");}
getch();
}