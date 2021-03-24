#include<stdio.h>
#include<string.h>
void rev(int n,char s[10]);
void rev(int n,char s[10])
{
	if(n>=0)
	{
		printf("%c",s[n]);
		rev(n-1,s);
	}	
}
void main()
{
	char str[20],i=0,l;
	gets(str);
	l=strlen(str);
	rev(l-1,str);
}
