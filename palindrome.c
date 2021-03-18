#include<stdio.h>
#include<string.h>
void main()
{
	char str[10],a[10];
	int l,h,len;
	printf("enter string");
	scanf("%s",&str);
	len=strlen(str);
	l=0;
	h=len-1;
	while(h>l)
	{
		if(str[l]!=str[h])
		{
			printf("Not palindrome");
			return;
		}
		l++;
		h--;
	}
	printf("Palindrome");
	
}
