#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	int i,alp=0,num=0,sc=0,len;
	printf("enter string");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]>=97 && str[i]<=122 )|| (str[i]>=65 && str[i]<=90))
		{
			alp++;
		}
		else if(str[i]>=48 && str[i]<=57)
		{
			num++;
		}
		else if(str[i]==32)
		{
			continue;
		}
		else
		{
			sc++;
		}
	}
	printf("Alphabets:%d\n",alp);
	printf("Numbers:%d\n",num);
	printf("Special characters:%d\n",sc);
}
