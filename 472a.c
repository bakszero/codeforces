#include<stdio.h>

int main ()
{
	int n;
	scanf("%d",&n);

	int a, b;

	if(n%2==0)
	{
		a = 4;
		b = n-4;
	}
	else
	{
		b = 9;
		a = n -9;
	}
	printf("%d %d\n", a, b);
	return 0;
}
