#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int n,i;
clrscr();
n=5;
printf("Enter Number Of Elements : %d",n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
printf("Memory Allocated");
exit(0);
}
else
{
printf("Memory Sucessfully Allocated Using Malloc\n");
for(i=0;i<n;i++)
{
ptr[i]=i+1;
}
printf("The Elements Of Array Are : ");
for(i=0;i<n;i++)
{
printf("%d",ptr[i]);
}
}
return 0;
getch();
}