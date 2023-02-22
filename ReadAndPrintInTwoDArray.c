#include<stdio.h>
main()
{
int a[3][3],i,j;
printf("Enter elements in array :");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d] = ",i,j);
scanf("%d",&a[i][j]);
}
printf("\n");
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("a[%d][%d] = %d",i,j,a[i][j]);
}
}
}
