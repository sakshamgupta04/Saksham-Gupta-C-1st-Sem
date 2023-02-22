#include<stdio.h>
main()
{
int r,n,sum=0;
printf("Enter the number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=r+sum;
n=n/10;
}
printf("The sum of digit of a number is %d",sum);
}
