#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],prod[10][10],r1,c1,r2,c2,i,j;
	printf("enter rows and columns of a");
	scanf("%d %d",&r1,&c1);
	printf("enter rows and columns of b");
	scanf("%d %d",&r2,&c2);
	if(r1==c1)
	{
		printf("enter elementf of a");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
		printf("enter elementf of a");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				prod[i][j]=a[i][j]*b[i][j];
			}
		}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ",prod[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("enter equal rows and colums!!!");
	}
	
}
