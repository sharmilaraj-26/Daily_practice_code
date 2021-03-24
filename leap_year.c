#include<stdio.h>

void main()
{
	int n;
	printf("enter the year to check");
	scanf("%d",&n);
	if((n%4==0)&&(n%100==0)&&(n%400==0))
	{
		printf("Leap year");
	}
	else
	printf("Not leap year");
}
