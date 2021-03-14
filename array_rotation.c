#include<stdio.h>
void main()
{
	int n,a[10],i,j,rotation,last;
	printf("enter no. of elements");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);		
	}
	printf("enter no. of rotation");
	scanf("%d",&rotation);
	for(j=0;j<rotation;j++)
	{
		last=a[n-1];
		for(i=n-1;i>0;i--)
		{
			a[i]=a[i-1];
		}
		a[0]=last;
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);		
	}
}
