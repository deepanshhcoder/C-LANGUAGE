#include<stdio.h>
void main()
{
int a[100],n,nf,i;
printf("enter number of elements of array:");
scanf("%d",&n);
printf("enter array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter no. to be found:");
scanf("%d",&nf);
for(i=0;i<n;i++)
if(a[i]==nf)
break;
if(i<n)
printf("%d is found at %d position",n,i+1);
else
printf("element is not found\n");
}

