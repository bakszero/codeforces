#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	char a[101];
	char b[101];

	scanf("%s", a);
	scanf("%s", b);
	
	int i;
	for (i = 0 ; i < strlen(a); i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
			a[i] = a[i] + 32;
	
		if (b[i] >= 65 && b[i] <= 90 )
			b[i] = b[i] + 32;
	}



	int val;
	val = strcmp(a,b);

	if ( val < 0)
		printf("-1\n");
	else if (val == 0)
		printf("0\n");
	else
		printf("1\n");

	return 0;
}
