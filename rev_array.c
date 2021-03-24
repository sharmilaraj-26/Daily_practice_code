#include<stdio.h>

void main()
{
	int a[10],s[10],i,n,j;
	printf("Enter no. of elements");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	for(j=(n-1);j>=0;j--)
	{
		s[i]=a[j];
		i++;
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",s[i]);
	}
}
