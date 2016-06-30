#include<stdio.h>

int main ()
{
	int a, b;
	scanf("%d %d", &a, &b);

	int c =0;
	int d =a;
	int y =a;
	while (1)
		{
			y =a;
			a = a/b;
			c=c+a;
			if (y>=b)
			a=a+(y%b);
			else
				break;
		}	
	
		
	printf("%d\n", c+d);
	return 0;
}
