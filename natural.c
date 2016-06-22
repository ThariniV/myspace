#include <stdio.h>
int main(void) {
	long long int number;
	scanf("%lld",&number);
	printf("%lld",(number*(number+1))/2);
	return 0;
}
