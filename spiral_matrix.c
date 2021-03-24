#include<stdio.h>
void main()
{
	int k,m,l,n,r,c,a[10][10],i,j;
	printf("enter row and column");
	scanf("%d %d",&r,&c);
	printf("enter elements");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	l=0,n=c-1;
	k=0;m=r-1;
	while(k<m && l<n)
	{
		for(i=l;i<=n;i++)
		{
			printf("%d ",a[k][i]);
		}
		k++;
		for(i=k;i<=m;i++)
		{
			printf("%d ",a[i][n]);
		}
		n--;
		if(k<=m)
		{
			for(i=n;i>=l;i--)
			{
				printf("%d ",a[m][i]);
			}
			m--;
		}
		if(l<=n)
		{
			for(i=m;i>=k;i--)
			{
				printf("%d ",a[i][l]);
			}
			l++;
		}
	}
/*	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
	}*/
}
