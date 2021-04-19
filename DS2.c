#include<stdio.h>
main()
{
	int a,b,p,area;
	printf("\nEnter Side a and b of rectangle: ");
	scanf("%d%d",&a,&b);
	p=2*(a+b);
	area=a*b;
	printf("\nPerimeter is %d",p);
	printf("\nArea is %d",area);
}
