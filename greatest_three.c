#include<stdio.h>
void main()
{
	int a,b,c,low,mid,high;
	printf("enter three numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		mid=a;
		low=b;
	}
	else
	{
		mid=b;
		low=a;
	}
	if(mid>c)
	{
		high=mid;
		if(low>c)
		{
			mid=low;
			low=c;
		}
		else
		{
			mid=c;
		}
	}
	else
	{
			high=c;
	}
	printf("Acending order:%d %d %d\n",low,mid,high);
	printf("Decending order:%d %d %d",high,mid,low);

}
