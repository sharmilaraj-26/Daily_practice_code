#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("enter no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=i;k<=2*n-i;k++)
		{
			printf("*");
			printf(" ");
		}
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("  ");
		}
		
	}
}
