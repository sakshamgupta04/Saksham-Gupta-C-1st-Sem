#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
int *ptr;
int n,i,size;
clrscr();
n=5;
printf("Enter number of elements : %d\n",n);
ptr=(int*)calloc(n,sizeof(int));
if(ptr==NULL)
{
printf("Memory not allocated");
exit(0);
}
else
{
printf("Memory successfully allocated using calloc");
for(i=0;i<n;i++)
{
ptr[i]=i+1;
}
printf("\nThe elements of array are :");
for(i=0;i<n;i++)
{
printf("%d",ptr[i]);
}
n=10;
printf("\n\nEnter the new size of the array : %d\n",ptr[i]);
ptr=realloc(ptr,n*sizeof(int));
printf("Memory successfully reallocated using realloc\n");
}
getch();
}
