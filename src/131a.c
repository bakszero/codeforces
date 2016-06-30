#include<stdio.h>
#include<string.h>

int main ()
{
	char a[101];

	scanf("%s", a);
	int c =0;
	int d = 0;

	int i;
	for ( i = 0; i < strlen(a); i++)
	{
		if (a[i] >= 65 && a[i] <= 90)
			c++;
		if (i>0)
		{
			if (a[0] >= 97 && a[0] <= 122 && a[i] >= 65 && a[i] <= 90)
				d++;
		}
	}

	if (c==strlen(a) || d==(strlen(a)-1))
	{
		int x;
		for ( x= 0 ; x<strlen(a) ; x++)
		{
			if (a[x] >=65 && a[x]<=90)
				a[x] = a[x] + 32;
			else if (a[x] >= 97 && a[x] <= 122)
				a[x] = a[x] - 32;
		}
	}

	printf("%s", a);
	printf("\n");

	return 0;
}
