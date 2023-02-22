#include<stdio.h>
#include<conio.h>
struct record
{
char name[100];
int graphics;
char rollno[50];
int physics;
int maths;
int computer;
int totalmarks;
}
student[50];
int final(int,int,int,int);
main()
{
int i,n,totalmarks=0;
clrscr();
printf("\nHow Many Students : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Name Of Student : ");
scanf("%s",student[i].name);
printf("Enter Roll Number : ");
scanf("%s",student[i].rollno);
printf("Marks In Graphics : ");
scanf("%d",&student[i].graphics);
printf("Marks In Physics : ");
scanf("%d",&student[i].physics);
printf("Marks In Maths : ");
scanf("%d",&student[i].maths);
printf("Marks In Computer Programming : ");
scanf("%d",&student[i].computer);
totalmarks=final(student[i].graphics,student[i].maths,student[i].computer,student[i].physics);
printf("Total Marks = %d\n",totalmarks);
}
getch();
}
int final(int a,int b,int c,int d)
{
int e;
e=(a+b+c+d);
return e;
}
