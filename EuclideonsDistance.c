#include<stdio.h>
#include<math.h>
main()
{
float x1,y1,x2,y2,euclideons_distance;
printf("Enter coordinates of A(x1,y1)");
scanf("%d%d",&x1,&x2);
printf("Enter coordinates of B(x2,y2)");
scanf("%d%d",&x2,&y2);
euclideons_distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("Euclideons distance is %d",euclideons_distance);
}
