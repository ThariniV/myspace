#include <stdio.h>
int main(void) {
	int number1,number2,temp;
	scanf("%d%d",&number1,&number2);
	temp=number1;
	number1=number2;
	number2=temp;
	printf("%d %d",number1,number2);
	return 0;
}
