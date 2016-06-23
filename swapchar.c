#include<stdio.h>
void main()
{
	char str1[100],temp;
	int i,j;
	scanf("%s",str1);
	for(i=0,j=i+1;str1[j];)
	{
		temp=str1[i];
		str1[i]=str1[j];
		str1[j]=temp;
		i=i+2;
		j=j+2;
	}
	printf("%s",str1);
}
