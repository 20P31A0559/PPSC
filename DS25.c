#include<stdio.h>
struct student
{
	char name[10];
	char roll[11];
	int marks;
};
main()
{
	struct student S1={"Swaraj","20P31A0559",596},S2;
	printf("\nEnter Student 2 details: ");
	printf("\nEnter Name: ");
	gets(S2.name);
	printf("\nEnter Roll no.: ");
	gets(S2.roll);
	printf("\nEnter Marks: ");
	scanf("%d",&S2.marks);
	printf("\nStudent 1 details: ");
	printf("\nName:%s\nRoll no.:%s\nMarks:%d",S1.name,S1.roll,S1.marks);
	printf("\nStudent 2 details: ");
	printf("\nName:%s\nRoll no.:%s\nMarks:%d",S2.name,S2.roll,S2.marks);
}
