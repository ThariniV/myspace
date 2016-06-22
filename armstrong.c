#include <stdio.h>
int main(void) {
	long long int number,x,arm=0,num;
	scanf("%lld",&number);
	num=number;
	while(number!=0)
	{
		x=number%10;
		number=number/10;
		arm=arm+(x*x*x);
	}
	if(arm==num)
		printf("%lld is an armstrong number",num);
	else
		printf("%lld is not an armstrong number",num);
	return 0;
}
