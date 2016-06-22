#include <stdio.h>
int main(void) {
	long long int range1,range2,x,arm=0,num,number,i;
	scanf("%lld%lld",&range1,&range2);
	for(i=range1;i<=range2;i++)
	{
		num=i;
		number=i;
		while(num!=0)
		{
			x=num%10;
			num=num/10;
			arm=arm+(x*x*x);
		}
		if(arm==number)
			printf("%lld ",number);
		arm=0;
	}
	return 0;
}
