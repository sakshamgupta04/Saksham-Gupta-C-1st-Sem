#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
int len;
char job[30];
clrscr();
printf("\n\n\n\tEnter Your Job : ");
gets(job);
len=strlen(job);
printf("\tYour dream job %s has %d characters in it",job,len);
getch();
}