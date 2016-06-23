#include<stdio.h>
#include<stdlib.h>
void main()
{
	char roman[10];
	int number=0,i;
	scanf("%s",roman);
	for(i=0;roman[i];i++)
	{
		if(roman[i]=='V' && (roman[i+1]=='X' || roman[i+1]=='L' || roman[i+1]=='C'))
		{
			printf("Invalid Roman Numeral");
			exit(1);
		}
		else if(roman[i]=='L' && roman[i+1]=='C')
		{
			printf("Invalid Roman Numeral");
			exit(1);
		}
		else if(roman[i]=='I' && roman[i+1]=='V')
		{
			number=number+4;
			i++;
		}
		else if(roman[i]=='I' && roman[i+1]=='X')
		{
			number=number+9;
			i++;
		}
		else if(roman[i]=='X' && roman[i+1]=='L')
		{
			number=number+40;
			i++;
		}
		else if(roman[i]=='X' && roman[i+1]=='C')
		{
			number=number+90;
			
		}
		else if(roman[i]=='I')
		{
			number=number+1;
			
		}
		else if(roman[i]=='V')
		{
			number=number+5;
			
		}
		else if(roman[i]=='X')
		{
			number=number+10;
			
		}
		else if(roman[i]=='L')
		{
			number=number+50;
			
		}
		else if(roman[i]=='C')
		{
			number=number+100;
			
		}
	}
	printf("%d",number);
}

		
