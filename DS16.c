/*Program to print n elements into 1-D array*/
#include<stdio.h>
main()
{
	int a[10], n, i;
	printf("\nEnter n value: ");
	scanf("%d",&n);
	printf("\nEnter elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nElements you entered are: ");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
}
