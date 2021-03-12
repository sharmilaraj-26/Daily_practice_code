#include<stdio.h>
void main()
{
	int n,i,j,k,n1,n2,n3;
	printf("enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		n1=0,n2=1;
		printf("%d\t",n2);
		for(j=1;j<i;j++)
		{
			n3=n1+n2;
			printf("%d\t",n3);
			n1=n2;
			n2=n3;
		}
		
		printf("\n");
	}
}
