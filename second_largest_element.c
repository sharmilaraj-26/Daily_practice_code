#include<stdio.h>
void main()
{
	int a[50],n,i,j,t;
	printf("enter the no. of elements");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("The second largest element is %d\n",a[1]);
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
