#include<stdio.h>
void main()
{
	char str[100];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i];i++)
	{
		if(i==0 || str[i-1]==' ')
		{
			str[i]=str[i]-32;
		}
	}
	printf("%s",str);
}
