#include <stdio.h>
int main(void) {
	long long int number,i,flag=0;
	scanf("%lld",&number);
	for(i=2;i<number/2;i++)
	{
		if(number%i==0 && number!=i)
			flag=1;
	}
	if(flag!=1)
		printf("%lld is a prime number",number);
	else
		printf("%lld is not a prime number",number);
	return 0;
}
