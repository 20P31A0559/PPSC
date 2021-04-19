#include<stdio.h>
main()
{
	int i,n,m;
	printf("\nEnter m value: ");
	scanf("%d",&m);
	printf("\nEnter n value: ");
	scanf("%d",&n);
	printf("%d to %d natural number: ",m,n);
	for(i=m;i<=n;i++)
	{
		printf("\n%d",i);
	}
}
