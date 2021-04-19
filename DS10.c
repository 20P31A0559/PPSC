#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("\nEnter n value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("Sum is %d",sum);
}
