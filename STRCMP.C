#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str1[20],str2[20];
int result;
clrscr();
printf("Enter 1st String :");
gets(str1);
printf("Enter 2nd String :");
gets(str2);
result=strcmp(str1,str2);
if(result==0)
{
printf("\nBoth Strings are equal");
}
else
{
printf("\nStrings are not equal");
}
getch();
}