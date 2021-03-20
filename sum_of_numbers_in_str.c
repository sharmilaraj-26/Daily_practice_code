#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];
	int i,sum=0,len;
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			sum=sum+str[i]-'0';
		}
	}
	printf("%d",sum);
}
