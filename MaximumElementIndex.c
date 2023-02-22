#include<stdio.h>
main()
{
int n,i=0,max=0,l=0;
printf("Enter the number of elements you want to enter");
scanf("%d",&n);
int array[5];
for(i=0;i<n;i++)
{
printf("Enter element number %d",i+1);
scanf("%d",&array[5]);
}
for(i=0;i<n;i++)
{
if(array[5]>=max)
{
max=array[5];
l=i;
}
}
printf("Max number is = %d",max);
scanf("Index of max number is = %d",l);
}
