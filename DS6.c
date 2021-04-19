#include<stdio.h>
main()
{
	int i,n,sum,temp;
	printf("\nEnter n value: ");
	scanf("%d",&n);
	printf("\nEven numbers from 1 to %d are: ",n);
	i=1;
	temp=n;
	sum=0;
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\nSum of even numbers from 1 to %d is %d",temp,sum);
}
