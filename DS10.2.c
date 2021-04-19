#include<stdio.h>
main()
{
	int a,b,sum;
	int *p,*q;
	printf("\nEnter 2 number: ");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	sum=(*p)+(*q);
	printf("\nSum of 2 integers is %d",sum);
}
