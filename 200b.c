#include<stdio.h>
#include<stdlib.h>

int main ()
{
	float n;
	scanf("%f", &n);
	
	float  a;

	int k;
	float c=0;
	for(k=0;k<(int)n;k++)
	{
		scanf("%f",&a);

		c = c + (0.01*a);
	}
	float ans = (c)*(100/n);
	printf("%f\n", ans);
	return 0;
}
