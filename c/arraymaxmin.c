#include<stdio.h>
int main()
{
int a[10],i,sum=0,max,min;
float average;
printf("enter array elements");
for (i=0;i<10;i++)
{
    scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
for(i=0;i<10;i++)
{
sum=sum+a[i];
if(a[i]>max)
max=a[i];
else if (a[i]<min)
min=a[i];

}
average=sum/10.0;
printf("average is:%f\tmax is:%d\tmin is:%d",average,max,min);
return 0;
}
