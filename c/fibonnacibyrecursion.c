#include<stdio.h>
#include<conio.h>
int fib(int n);
void main()
{
    int i,n;
    printf("enter no. of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
printf("%d\t",fib(i));
}
}
int fib (int n)
{
    if (n==0)
    return 0;
    else if (n==1)
    return 1;
    else 
    return (fib(n-1)+fib(n-2));
}








    
