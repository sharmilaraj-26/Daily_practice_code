#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("enter number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf(" ");
	}
	printf("*\n");
	for(i=1;i<n-1;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		printf("*");
		for(k=1;k<2*i;k++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	printf(" ");
	for(i=1;i<2*n;i++)
	{
		printf("*");
	}
	
}
