#include<stdio.h>
void main()
{
	int n,rem,rev=0;
	printf("enter number");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		rev=rev*10+rem;
	}
	printf("reversed number:%d",rev);
	
}
