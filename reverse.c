#include<stdio.h>
#include<string.h>
void main()
{
	char str[100],temp;
	int length=0,i,j;
	scanf("%s",str);
	length=strlen(str);
	for(i=0,j=length-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s",str);
}
