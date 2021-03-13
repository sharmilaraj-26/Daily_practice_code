#include<stdio.h>
void main()
{
	int a[50][50],b[50][50],r,c,i,j;
	printf("enter row and column");
	scanf("%d %d",&r,&c);	
	printf("enter matrix elements");
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
	//to find transpose
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				b[j][i]=a[i][j];
			}
		}
		printf("The transpose is:\n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}
}
