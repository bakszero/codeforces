#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	int n;
	scanf("%d", &n);
	while (n--)
	{
		char str[100], c;
		int i = 0;
		
		scanf("%s", str);
		
		
		int len = strlen(str);

		if ( len <= 10)
		{
			int j;
				printf("%s", str);
				printf("\n");
				
		}

		else
		{
			int temp = len - 2;

			char a , b;

			a = str[0];
			b = str[len-1];

			printf("%c", a);
			printf("%d", temp);
			printf("%c",b);
			printf("\n");

		}


	}
	return 0;
}
