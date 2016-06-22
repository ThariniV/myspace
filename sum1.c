#include <stdio.h>
int main(void) {
	long long int number,sum=0;
	scanf("%lld",&number);
	for(int i=1;i<=number;i++)
		sum=sum+i;
	printf("%lld",sum);
	return 0;
}
