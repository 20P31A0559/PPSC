#include<stdio.h>
main()
{
	int a[5][5],t[5][5];
	int r,c,i,j;
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
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("\nThe Transpose of given Matrix: ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
}
