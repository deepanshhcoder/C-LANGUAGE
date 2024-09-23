#include<stdio.h>
void main()
{
int i,j,a[3][3],b[3][3],sum[3][3]={0},sub[3][3]={0};
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
printf("matrix addition:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{sum[i][j]=a[i][j]+b[i][j];
printf("%d\t",sum[i][j]);
}
printf("\n");
}
printf("matrix subtraction:\n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
{sub[i][j]=a[i][j]-b[i][j];
printf("%d\t",sub[i][j]);
}
printf("\n");
}
}