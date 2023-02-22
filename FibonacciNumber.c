#include<stdio.h>
main()
{
int a,b,c,i;
printf("Enter value of a and b");
scanf("%d%d",&a,&b);
for(i=1;i<=5;i++)
{
c=a+b;
a=b;
b=c;
printf("Fib = %d",c);
}
}
