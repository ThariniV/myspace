#include<stdio.h>
int main()
{
  long long int number1,number2,number3,large=0;
  scanf("%lld%lld%lld",&number1,&number2,&number3);
  large = (number1>number2) ? ((number1>number3) ? number1 : number3) : ((number2>number3) ? number2 : number3);
  printf("%lld",large);
  return 0;
}
