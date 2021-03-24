#include<stdio.h>
void main()
{
	int a,b,lcm,gcd,num,den,rem;
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	if(a>b)
	{
		num=a;
		den=b;
	}
	else
	{
		num=b;
		den=a;
	}
	rem=num%den;
	while(rem!=0)
	{
		num=den;
		den=rem;
		rem=num%den;
	}
	gcd=den;
	lcm=(a*b)/gcd;
	printf("LCM:%d\n GCD:%d",lcm,gcd);

}
