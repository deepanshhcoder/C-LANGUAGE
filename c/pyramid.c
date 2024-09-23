#include <stdio.h>  
#include <conio.h>  
void main()  
{
int row,column,space;
for(row=1;row<=4;row++)
{
    for(space=4;space>row-1;space--)
    {
        printf(" ");
    }   
    for(column=1;column<=row*2-1;column++)
{
    printf("*");
}
        printf("\n");
    }
}







