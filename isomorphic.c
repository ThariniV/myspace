#include<stdio.h>
#include<string.h>
#define MAX_CHARS 256
int areIsomorphic(char* str1, char* str2)
{
	int m = strlen(str1);
	int n = strlen(str2);
	int i;
	if (m != n)
		return 0;
	int marked[MAX_CHARS] = {0};
	int map[MAX_CHARS];
	memset(map, -1, sizeof(map));
	for (i = 0; i < n; i++)
	{
		if (map[str1[i]] == -1)
		{
			if (marked[str2[i]] == 1)
				return 0;
			marked[str2[i]] = 1;
			map[str1[i]] = str2[i];
		}
		else if (map[str1[i]] != str2[i])
		{
			printf("Entered\n");
			return 0;
		}
	}

	return 1;
}
int main()
{
	char s1[100],s2[100];
	int result;
	scanf("%s%s",s1,s2);
	result=areIsomorphic(s1,s2);
	if(result)
		printf("%s and %s are isomorphic strings",s1,s2);
	else
		printf("%s and %s are not isomorphic strings",s1,s2);
	return 0;
}
