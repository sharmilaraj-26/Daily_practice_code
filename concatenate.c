#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20],str3[20];
	int i,j,l1,l2;
	gets(str1);
	gets(str2);
	l1=strlen(str1);
	l2=strlen(str2);
	for(i=0;i<l1;i++)
	{
		str3[i]=str1[i];
	}
	for(j=0;j<l2;j++)
	{
		str3[i]=str2[j];
		i++;
	}
	printf("%s",str3);
}
