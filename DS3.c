#include<stdio.h>
#include<math.h>
main()
{
	int x1,y1,x2,y2;
	float distance;
	printf("\n The point x1 is: ");
	scanf("%d",&x1);
	printf("\n The point y1 is: ");
	scanf("%d",&y1);
	printf("\n The point x2 is: ");
	scanf("%d",&x2);
	printf("\n The point y2 is: ");
	scanf("%d",&y2);
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("\n The distance between (%d,%d) and (%d,%d) is %f",x1,y1,x2,y2,distance);
}
