#include<stdio.h>
#include<math.h>
main()
{
	int n,i;
	printf("Enter n vlaue: ");
	scanf("%d",&n);
	printf("The Factorials of %d are: ",n);
	while(n!=0)
	{
		n--;
		printf("\n%d",n);
	}
}
