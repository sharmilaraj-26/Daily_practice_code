#include<stdio.h>
void main()
{
	int r,c,i,j,a[50][50],sum=0;
	printf("enter row");
	scanf("%d",&r);
	printf("enter column");
	scanf("%d",&c);
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
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<c-1;j++)
	{
		i=0;
		sum+=a[i][j];
	}
		for(j=1;j<c;j++)
	{
		i=r-1;
		sum+=a[i][j];
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if((i+j)==(c-1))
			{
				sum+=a[i][j];
			}
		}
	}
printf("SUM:%d",sum);
}










