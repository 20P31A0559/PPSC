#include<stdio.h>
main()
{
	int a[5][5];
	int r,c,i,j,key,flag=0;
	printf("\nEnter number of rows: ");
	scanf("%d",&r);
	printf("\nEnter number of columns: ");
	scanf("%d",&c);
	printf("\nEnter elements into Matrix A: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter Key to be searched: ");
	scanf("%d",&key);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==key)
			{
				printf("\nElement found at %d,%d",++i,++j);
				flag=1;
			}
		}
	}
	if(flag=0)
	printf("\nKey element not found");
}
