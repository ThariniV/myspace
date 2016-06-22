#include <stdio.h>
int main(void) {
	long long int number,count=0;
	scanf("%lld",&number);
	while(number!=0)
	{
		number=number/10;
		count++;
	}
	printf("%lld",count);
	return 0;
}
