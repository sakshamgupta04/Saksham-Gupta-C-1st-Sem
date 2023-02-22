#include<stdio.h>
#include<conio.h>
int factorial(int);
int main()
{
int num,fact;
clrscr();
printf("Enter any integer number : ");
scanf("%d",&num);
fact=factorial(num);
printf("Factorial of %d is : %d",num,fact);
getch();
return 0;
}
int factorial(int n)
{
if(n==0)
return(1);
return(n*factorial(n-1));
}