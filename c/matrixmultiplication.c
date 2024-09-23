#include<stdio.h>
void main()
{
int i,j,k,a[3][3],b[3][3],multiplication[3][3]={0},sum[3][3]={0};
printf("enter elements of A matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter elements of matrix B:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{
    scanf("%d",&b[i][j]);
}
}
printf("matrix multiplication:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
{
    multiplication[i][j]=multiplication[i][j]+(a[i][k]*b[k][j]);}}}
//for printing multiplication
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",multiplication[i][j]);
}
printf("\n");
}
}