#include<stdio.h>
void main()
{
  char alphabet;
  scanf("%c",&alphabet);
  if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='I' || alphabet=='E' || alphabet=='O' || alphabet=='U')
  {
    printf("%c is a vowel");
  }
  else
    printf("%c is a consonant");
}
