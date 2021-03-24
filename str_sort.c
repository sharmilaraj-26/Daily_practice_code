#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char s[10],t;
	int l,i,j;
	printf("Enter the string");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			
		   }
		}
	}
	puts(s);	
}

