#include<stdio.h>
#include<stdlib.h>
int main()
{
int *ptr;
int i,n;
n=5;
printf("Enter Number Of Elements : %d\n",n);
ptr=(int*)malloc(n*sizeof(int));
if(ptr==NULL)
{
printf("Memory Allocted");
exit(0);
}
else
{
printf("Memory Allocated Successfully Using Malloc\n");
for(i=0;i<n;i++)
{
ptr[i]=i+1;
}
printf("The Elements Of Array Are : ");
for(i=0;i<n;i++)
{
printf(" %d ",ptr[i]);
}
}
return 0;
}
