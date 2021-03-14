#include<stdio.h>
void main()
{
	int a,b,lcm=1,i,max;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		max=a;
	}
	else
	{
		max=b;
	}
	while(1)
	{
		if((max%a==0)&&(max%b==0))
		{
				printf("LCM:%d",max);
				break;
		}
		max++;
	}

}
