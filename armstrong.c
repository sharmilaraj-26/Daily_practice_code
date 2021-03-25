#include<stdio.h>
void main()
{
	int r,d,n,a=0,t;
	printf("Enter the number");
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		d=t%10;
		a+=d*d*d;
		t=t/10;	
	}
	if(a==n)
	{
		printf("Armstrong");
	}
    else
    {
		printf("Not Armstrong");
    }
}
