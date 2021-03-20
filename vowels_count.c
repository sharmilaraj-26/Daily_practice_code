#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],i;
	int len,vow=0;
	printf("enter the string");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if((str[i]=='a')|| (str[i]=='e') || (str[i]=='i') || (str[i]=='o') || (str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
		{
			vow++;
		}
	}
	printf("No. of vowels is:%d",vow);
}
