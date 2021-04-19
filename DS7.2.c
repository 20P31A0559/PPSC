#include<stdio.h>
#include<string.h>
main()
{
	char str[20];
	int len,i;
	printf("\nEnter String: ");
	gets(str);
	len=strlen(str);
	printf("\nString in reverse order: ");
	for(i=len-1;i>=0;i--)
		printf("%c",str[i]);
}
