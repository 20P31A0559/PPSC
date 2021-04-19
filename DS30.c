#include<stdio.h>
main()
{
	int a=5;
	int *ptr1;
	int **ptr2;
	ptr1=&a;
	ptr2=&ptr1;
	printf("\nValue %d stored at %u",a,&a);
	printf("\nValue %d stored at %u",*ptr1,ptr1);
	**ptr2=25;
	printf("\nValue at a is %d",a);
}
