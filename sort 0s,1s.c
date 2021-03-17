#include<stdio.h>
void main()
{
	int a[20],n,l,h,m,i,t;
	printf("enter no. of elements");
	scanf("%d",&n);
	printf("enter elements 0s and 1s");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=0;
	m=0;
	h=n-1;
	while(h>m)
	{
		if(a[m]==0)
		{
			t=a[m];
			a[m]=a[l];
			a[l]=t;
			m++;
			l++;
		}
		else if(a[m]==1)
		{
			t=a[m];
			a[m]=a[h];
			a[h]=t;
			h--;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
	
	
}
