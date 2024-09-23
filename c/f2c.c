#include<stdio.h>
#include<conio.h>
void main ()
{
float f,c;
printf("enter temperature in fahrenheit=");
scanf("%f",&f);
c=(5.0/9.0*(f-32));
printf("temperature in celcius=%f", c );
getch();
}