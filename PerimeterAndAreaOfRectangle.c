#include<stdio.h>
main()
{
int length,breadth,perimeter,area;
printf("Enter length and breadth of rectangle : ");
scanf("%d%d",&length,&breadth);
perimeter=2*(length+breadth);
printf("The perimeter of rectangle is %d",perimeter);
area=length*breadth;
printf("The Area of rectangle is %d",area);
}
