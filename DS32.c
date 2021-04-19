/*Program to explain function that has both parameters and return values*/
#include<stdio.h>
int add(int,int);
main()
{
	int a,b,c;
	printf("\nEnter 2 numbers: ");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("\nSum is %d",c);
}
int add(int a,int b)
{
	return(a+b);
}
