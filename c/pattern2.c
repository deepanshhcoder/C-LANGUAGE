#include<stdio.h>
void main()
{
int r,c,s;
for(r=1;r<=4;r++)
{
for(s=4-r;s>=1;s--)
{ 
printf(" ");
}
for(c=1;c<=2*r-1;c++);
{
printf("*");
}
printf("\n");
}
}
