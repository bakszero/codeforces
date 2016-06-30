#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	char a[101];

	int c = 0;

	scanf("%s", a);

	int len = strlen(a);
	int i;
	int flag = 0;
	
	for (i = 0; i < (len - 1) ; i++)
	{
		if (a[i] == a[i+1])
			c++;
		if (c==6)
			flag = 1;
		if (a[i] != a[i+1])
			c= 0;
	}

	if ( flag == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}




