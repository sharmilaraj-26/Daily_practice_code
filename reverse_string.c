#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],a[20];
	int len,i,j=0;
	gets(str);
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		a[j]=str[i];
		j++;
	}
	printf("%s",a);
}
