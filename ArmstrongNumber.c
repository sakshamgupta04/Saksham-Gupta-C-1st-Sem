#include<stdio.h>
main()
{
int n,r,arm=0,a;
printf("Enter any number");
scanf("%d",&n);
a=n;
while(n>0)
{
r=n%10;
arm=arm+(r*r*r);
n=n/10;
}
if(arm==a)
{
printf("Number is armstrong");
}
else
{
printf("Number is not armstrong");
}
}
