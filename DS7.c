#include<stdio.h>;
main()
{
	int i,n,sum;
	printf("\nEnter n value: ");
	scanf("%d",&n);
	i=1;
	sum=0;
	printf("\n1");
	while(i<=n)
	{
		printf("+1/%d",i);
		i++;
	}
}
