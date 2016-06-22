#include<stdio.h>
void main()
{
  char c;
  scanf("%c",&c);
  if(c>=65 && c<=90 || c>=97 && c<=122)
    printf("%c is an alphabet");
  else
    printf("%c is not an alphabet");
}
