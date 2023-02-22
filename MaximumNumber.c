#include<stdio.h>
main()
{
int n,i,max=0,x;
printf("Enter the value of n");
scanf("%d",&n);
max=0;
for(i=0;i<=n;i++)
{
scanf("%d",&x);
if(max<x)
{
max=x;
}
printf("Max = %d",max);
}
}
