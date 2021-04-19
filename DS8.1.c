#include<stdio.h>
void main()
{
	char str1[20],str2[20];
	int un1=0,un2=0,i;
	printf("\nEnter String1: ");
	gets(str1);
	printf("\nEnter String2: ");
	gets(str2);
	for(i=0;str1[i]!='\0';i++)
		un1++;
	for(i=0;str2[i]!='\0';i++)
		un2++;
	if(un1==un2)
	{
		for(i=0;str1[i]!='\0';i++)
		{
			if(str1[i]!=str2[i])
			{
				printf("\nStrings are not equal");
				exit(0);
			}
		}
		printf("\nStrings are equal");
	}
	else
	{
		printf("\nLengths are not equal, so strings are not equal");
	}
}
