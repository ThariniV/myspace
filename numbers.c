#include <stdio.h>
int main(void) {
	int i,sum=0,odd=0;
	for(i=1;i<=15;i++)
		sum=sum+i;
	for(i=15;i<=45;i++)
	{
		if(i%2!=0)
			odd=odd+i;
	}
	printf("%d %d",sum,odd);
	return 0;
}
