#include <stdio.h>
int main(void) {
	int range1,range2,i,j,flag=0;
	scanf("%d%d",&range1,&range2);
	for(i=range1;i<range2;i++)
	{
		flag=0;
		for(j=2;j<range2/2;j++)
		{
			if(i%j==0 && i!=j)
				flag=1;
		}
		if(flag!=1)
			printf("%d ",i);
	}
	return 0;
}
