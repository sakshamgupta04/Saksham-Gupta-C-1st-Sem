#include<stdio.h>
main()
{
int i=2,n,count=0;
printf("Enter any number");
scanf("%d",&n);
while(i<=n)
{
if(n%i==0)
{
count=count+1;
}
i=i++;
}
if(count==1)
{
printf("The number is prime");
}
else
{
printf("The number is not prime");
}
}
