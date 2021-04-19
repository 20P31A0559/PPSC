/*Program to print prices of any 10 books using 1-D array*/
#include<stdio.h>
main()
{
	int i;
	float a[10];
	printf("\nEnter Prices: ");
	for(i=1;i<=10;i++)
	scanf("%f",&a[i]);
	printf("\nPrices you entered are: ");
	for(i=1;i<=10;i++)
	printf("\nBook %d : %f",i,a[i]);
}
