#include<stdio.h>
main()
{
	int a[5]={6,1,3,5,10};
	int *ptr,i;
	ptr=&a[0];
	printf("\nElements in 1-D Array are: ");
	for(i=0;i<5;i++)
	{
		printf("%d ",*ptr);
		ptr++;
	}
}
