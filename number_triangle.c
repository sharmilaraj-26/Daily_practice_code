#include<stdio.h>
void main()
{
	int n,i,j,k,m=3,p;
	printf("enter the  number");
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
	{
		printf(" ");
	}
	printf("1\n");
	for(i=0;i<n-1;i++)
	{
		for(j=n-i-1;j>1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i+2;k++)
		{
			printf("%d",k);
		}
		for(p=i+1;p>0;p--)
		{
			printf("%d",p);
		}
		printf("\n");
	}
}
