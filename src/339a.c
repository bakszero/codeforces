#include<stdio.h>
#include<string.h>

int main ()
{
	char a[101];
	int b[100];

	scanf("%s", a);
	
	int i;
	int l = 0;
	for (i = 0 ; i < strlen(a) ; i=i+2)
	{
		b[l] = a[i] - '0';	
		l++;
	}


	int k, j;

	for ( k = 0 ; k < (l -1); k++)
	{
		for (j=0; j < (l - 1 -k) ; j++)
		{
			if (b[j] > b[j+1])
			{
				int temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}

	int x;
	for (x = 0 ; x < l ; x++)
	{
		//b[x] = b[x] + '0';

		printf("%d", b[x]);
		if ( x < l -1 )
		printf("+");
	}
	printf("\n");

	return 0;
}


