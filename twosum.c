#include <stdio.h>

int main(void) {
	int target,a[100]={0},n,flag=0,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&target);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if((a[i]+a[j])==target)
			{
				printf("%d %d",a[i],a[j]);
				flag=1;
				break;
			}
		}
	}
	if(flag!=1)
		printf("0");
	return 0;
}
