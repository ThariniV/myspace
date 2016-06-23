#include <stdio.h>
int main(void) {
	int number;
	scanf("%d",&number);
	printf("%d",fact(number));
	return 0;
}
int fact(int n)
{
	if(n>=1)
		return n*fact(n-1);
	else
		return 1;
}
