#include<stdio.h>
void main()
{
  long long int number;
  scanf("%lld",&number);
  if(number & 1)
    printf("Odd");
  else
    printf("Even");
}
