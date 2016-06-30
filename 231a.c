#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);

	int a , b, c;
	int d = 0;

	while (n--)
	{
		scanf("%d %d %d", &a, &b, &c);

		if (a&b || b&c || c&a)
			++d;
	}
	printf("%d\n", d);
	return 0;
}
