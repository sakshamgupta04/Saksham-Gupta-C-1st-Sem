#include<stdio.h>
#include<conio.h>
main()
{
int a[3][3],b[3][2],c[3][2],i,j,k,sum=0;
clrscr();
printf("Enter first matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d] = ",i,j);
scanf("%d",&a[i][j]);
}
}
printf("\nEnter second matrix\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("b[%d][%d] = ",i,j);
scanf("%d",&b[i][j]);
}
}
printf("\n");
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
for(k=0;k<3;k++)
{
sum=sum+a[i][j]+b[i][j];
c[i][j]=sum;
}
}
}
for(i=0;i<3;i++)
{
for(j=0;j<2;j++)
{
printf("c[i][j]=%d\t",c[i][j]);
}
printf("\n");
}
getch();
}