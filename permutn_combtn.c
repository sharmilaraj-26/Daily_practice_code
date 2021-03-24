#include<stdio.h>
void main()
{
	int n,r,p,c,fact_n=1,fact=1,fact_r=1,i,t;
	printf("enter n and r");
	scanf("%d %d",&n,&r);
	if(n>r)
	{
		for(i=1;i<=n;i++)
		{
			fact_n=fact_n*i;
		}
		t=n-r;
		for(i=1;i<=t;i++)
		{
			fact=fact*i;
		}
		p=fact_n/fact;
		for(i=1;i<=r;i++)
		{
			fact_r=fact_r*i;
		}
		c=fact_n/(fact_r*fact);
		printf("permutation:%d\n Combination:%d",p,c);
	}
	else
	{
		printf("give correct input!!!");
	}
}
