#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int n,i,size;
int*ptr;
clrscr();
n=5;
printf("Enter number of elements : %d\n",n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL)
{
printf("Memory not allocated\n");
}
else
{
printf("Memory successfully allocated using calloc\n");
for(i=0;i<n;i++)
{
ptr[i]=i+1;
}
}
printf("The element of array are");
for(i=0;i<n;i++)
{
printf(" %d ",ptr[i]);
}
getch();
}
