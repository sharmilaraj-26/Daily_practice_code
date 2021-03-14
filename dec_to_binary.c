#include<stdio.h>
void main()
{
	int dec,rem,i=1;
	long long bin=0;
	printf("enter decimal number");
	scanf("%d",&dec);
	while(dec!=0)
	{
		rem=dec%2;
		dec=dec/2;
		bin=bin+rem*i;
		i=i*10;
	}
	printf("Binary number:%lld",bin);
}
