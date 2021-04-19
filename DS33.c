/*Program to explain functions having parameters but no return value*/
#include<stdio.h>
void mult(float,float,float);
main()
{
	float a,b,c;
	printf("\nEnter 3 real numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	mult(a,b,c);
}
void mult(float a,float b, float c)
{
	float d;
	d=a*b*c;
	printf("\nProduct is %f",d);
}
