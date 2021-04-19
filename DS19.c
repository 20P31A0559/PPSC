/*Program to calculate sum of all the elements in a given array and find out thr average using 1-D array*/
#include<stdio.h>
main()
{
	int a[10], n, i, sum=0;
	float avg;
	printf("\nEnter n value: ");
	scanf("%d",&n);
	printf("\nEnter elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("\nElements you entered are: ");
	for(i=0;i<n;i++)
	printf("\n%d",a[i]);
	for(i=0;i<n;i++)
	sum+=a[i];
	printf("\nSum is %d",sum);
	avg=(float)sum/n;
	printf("\nAverage is %f",avg);
}
