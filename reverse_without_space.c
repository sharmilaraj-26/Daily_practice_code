#include<stdio.h>
#include<string.h>
void main()
{
	char str[20],a[20],t;
	int len,l,h;
	printf("enter string");
	gets(str);
	len=strlen(str);
	l=0;
	h=len-1;
	while(l<h)
	{
		if(str[l]!=' ' && str[h]!=' ')
		{
			t=str[l];
			str[l]=str[h];
			str[h]=t;
			l++;
			h--;
		}
		else if(str[l]==' ' && str[h]!=' ')
		{
			l++;
		}
		else if(str[h]==' ' && str[l]!=' ')
		{
			h--;
		}
	}
	printf("%s",str);
	
}
