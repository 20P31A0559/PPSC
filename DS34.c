#include<stdio.h>
void swap(int*,int*);
main()
{
	int a,b;
	printf("\nEnter 2 values: ");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
	printf("\nValues of a=%d, b=%d in main()",a,b);
}
void swap(int *p,int *q)
{
	int c;
	c=*p;
	*p=*q;
	*q=c;
	printf("\nValues if a=%d, b=%d in swap()",*p,*q);
}
