#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
char str1[50],str2[50];
clrscr();
printf("Enter First String : ");
gets(str1);
printf("Enter Second String : ");
gets(str2);
printf("\nConcatenating First And Second String...\n\n");
strcat(str1,str2);
printf("First String : %s\n",str1);
printf("Second String : %s\n",str2);
getch();
}