#include<stdio.h>

int main()
{
float total,base,gst, total_price;
scanf("%f",&total);
scanf("\n%f",&gst);
base=total/((1+gst/100));
gst=total-base;
total_price=base+gst;
printf("%.2f\n", base);
printf("%.2f\n",gst);
printf("%.2f\n", total_price);
return 0;
}