#include<stdio.h>
struct student
{
	char name[10];
	char roll[11];
	int marks;
};
main()
{
	int i;
	struct student S[3];
	for(i=0;i<3;i++)
	{
	  printf("\nEnter Student %d details: ",i);
	  printf("\nEnter Name: ");
	  fflush(stdin);
	  gets(S[i].name);
	  printf("\nEnter Roll no.: ");
	  fflush(stdin);
	  gets(S[i].roll);
	  printf("\nEnter Marks: ");
	  fflush(stdin);
	  scanf("%d",&S[i].marks);
    }
	printf("\nStudent details: ");
	for(i=0;i<3;i++)
	{
		printf("\nStudent %d details:",i);
		printf("\nName:%s\nRoll no.:%s\nMarks:%d",S[i].name,S[i].roll,S[i].marks);
	}
}
