#include<stdio.h>

int main ()
{
	int a, b;
	scanf("%d %d" , &a, &b);
	

	int max = 0;
	int days = 0;

	int f =0;

	if(a>=b)
	{
		max = b;
		f = a-b;
	}
	else
	{
		max = a;
		f = b-a;
	}


	days = f/2;

	printf ("%d %d\n", max, days);
	return 0;
}

