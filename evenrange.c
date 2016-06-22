#include <stdio.h>
int main(void) {
	long long int range1,range2,i;
	scanf("%lld%lld",&range1,&range2);
	for(i=range1;i<=range2;i++)
	{
		if(i%2==0)
			printf("%lld ",i);
	}
	return 0;
}
