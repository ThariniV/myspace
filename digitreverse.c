#include<stdio.h>
void main()
{
	int number,reverse=0,remainder;
	scanf("%d",&number);
	while(number!=0)
	{
		remainder=number%10;
		reverse=(reverse*10)+remainder;
		number=number/10;
	}
	printf("%d",reverse);
}
