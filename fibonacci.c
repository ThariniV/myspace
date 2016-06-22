#include <stdio.h>
int main(void) {
	int number,c,a=0,b=1,n;
	scanf("%d",&number);
	printf("%d %d ",a,b);
	n=number-2;
	while(n--)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	return 0;
}
