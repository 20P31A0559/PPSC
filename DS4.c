#include<stdio.h>
main()
{
	int p,q,r,s;
	printf("\nEnter values of p, q, r and s respectively: ");
	scanf("%d%d%d%d",&p,&q,&r,&s);
	if((r>0)&&(s>0))
	{
		if(p%2==0)
		{
			if((q>r)&&(s>p))
			{
				if((r+s)>(p+q))
				{
					printf("\nCorrect Values");
				}
				else
				{
					printf("\nWrong Values");
				}
			}
			else
			{
				printf("\nWrong Values");
			}
			
		}
		else
		{
			printf("\nWrong Values");
		}
	}
	else
	{
		printf("\nWrong Values");
	}
}
