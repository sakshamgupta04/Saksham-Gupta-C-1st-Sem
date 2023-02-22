#include<stdio.h>
#include<conio.h>
union student
{
int roll;
float marks;
}s;
main()
{
clrscr();
printf("Enter Information : \n");
printf("Enter Roll Number : ");
scanf("%d",&s.roll);
printf("Enter Marks : ");
scanf("%f",&s.marks);
printf("Displaying Information :\n");
printf("Roll Number : %d\n",s.roll);
printf("Marks : %.4f\n",s.marks);
getch();
}