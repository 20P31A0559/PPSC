#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	struct joining
	{
		int dd,mm,yyyy;
	}doj;
}e1;
main()
{
	e1.id=4136;
	printf("\nEnter name of employee: ");
	gets(e1.name);
	e1.doj.dd=31;
	e1.doj.mm=1;
	e1.doj.yyyy=1975;
	printf("\n%s with emp. id %d joined organization on %d-%d-%d",e1.name,e1.id,e1.doj.dd,e1.doj.mm,e1.doj.yyyy);
}
