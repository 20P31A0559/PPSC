#include<stdio.h>
main()
{
	int n,i,j,sum;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	sum=0;
	for(i=2,j=1;j<=n;i=i+2,j++)
	{
		printf("%d\t",i);
		sum+=i;
	}
	printf("\nTotal is: %d\n",sum);
	return 0;
}
