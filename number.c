#include<stdio.h>
int main()
{
  long long int number;
  scanf("%lld",&number);
  if(number==0)
    printf("Zero");
  else if(number>0)
    printf("Positive");
  else
    printf("Negative");
}
