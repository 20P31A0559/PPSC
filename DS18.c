/*Program to read and print marks of 5 students using 1-D array*/
#include<stdio.h>
main()
{
	int i;
	float a[10];
	printf("\nEnter Marks: ");
	for(i=1;i<=5;i++)
	scanf("%f",&a[i]);
	printf("\nMarks of 5 students are: ");
	for(i=1;i<=5;i++)
	printf("\nStudent %d : %f",i,a[i]);
}
