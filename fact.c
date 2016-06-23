#include<stdio.h>
void main()
{
	int number;
	scanf("%d",&number);
	printf("%d",fact(number));
}
int fact(int num)
{
	if(num>=1)
		return num*fact(num-1);
	else
		return 1;
}
