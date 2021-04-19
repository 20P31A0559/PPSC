#include<stdio.h>
main()
{
	int i,n,m;
	printf("\nEnter n vlaue: ");
	scanf("%d",&n);
	printf("\nEnter the last value until which u want multiplication table: ");
	scanf("%d",&m);
	printf("\nThe multiplication table u require is: ");
	for(i=1;i<=m;i++)
	{
		printf("\n%dx%d=%d",n,i,n*i);
	}
}
