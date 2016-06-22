#include <stdio.h>
int main(void) {
	int number1,number2,number3,large;
	scanf("%d%d%d",&number1,&number2,&number3);
	large=(number1>number2)?((number1>number3)?number1:number3):((number2>number3)?number2:number3);
	printf("%d",large);
	return 0;
}
