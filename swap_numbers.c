#include<stdio.h>
void main()
{
	int a,b;
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("After swaping\n");
	printf("a=%d\n""b=%d",a,b);
}
