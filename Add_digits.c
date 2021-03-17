#include<stdio.h>
void main()
{
	int n,rem,dig=0;
	printf("enter number");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		dig=dig+rem;
	}
	printf("addition of digits:%d",dig);
	
}
