#include<stdio.h>
void main()
{
int n,n1,rev=0,digit;
printf("enter any no.:");
scanf("%d",&n);
n1 = n;
while(n!=0)
{
digit = n % 10;
rev=(rev*10)+digit;
n = n/10;    
}
if (n1 == rev)
 {
printf(" yes it is palindrome no.");
}
else
{
printf("not palindrome");
}

}