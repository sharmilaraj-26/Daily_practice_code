#include<stdio.h>
void main()
{
	int a,b;
	int* xp;
	int* yp;
	printf("enter number a and b");
	scanf("%d %d",&a,&b);
	xp=&a;
	yp=&b;
	*xp=*xp ^ *yp;
	*yp=*xp ^ *yp;
	*xp=*xp ^ *yp;
	printf("after swaping:%d %d",*xp,*yp);
	
}

