#include<stdio.h>
int fact(int n);
int main()
{
    int m,n;
    printf("enter no.:");
    scanf("%d",&n);
     m=fact(n);
     printf("factorial is %d",m);
    
}
int fact(int n)
{
if (n==1)
return 1;

else 
return (n*fact(n-1));

}
