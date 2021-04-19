#include<stdio.h>
main()
{
	int i,n,f;
	f=i=1;
	printf("\Enter a number: ");
	scanf("%d",&n);
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("\nThe factorial of %d is: %d",n,f);
	return 0;
}
