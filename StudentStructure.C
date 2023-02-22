#include<stdio.h>
#include<conio.h>
struct student
{
char name[100];
char rollno[20];
char section[5];
char subject[20];
int assignment1;
int assignment2;
int internalmarks;
};
main()
{
clrscr();
struct student data;
printf("Enter name : ");
scanf("%s",data.name);
printf("Enter roll number : ");
scanf("%s",data.rollno);
printf("Enter section : ");
scanf("%s",data.section);
printf("Enter subject : ");
scanf("%s",data.subject);
printf("Enter assignment1 marks : ");
scanf("%d",&data.assignment1);
printf("Enter assignment2 marks : ");
scanf("%d",&data.assignment2);
data.internalmarks=data.assignment1+data.assignment2;
printf("Internal marks : %d\n",data.internalmarks);
getch();
}