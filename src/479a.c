#include<stdio.h>

int main ()
{
	int x,y,z;
	int max = 0;

	scanf("%d %d %d", &x, &y, &z);

	max = x+(y*z);

	int temp = x*(y+z);
	if (temp > max)
		max = temp;
	temp = x*y*z;
	if (temp > max)
		max = temp;
	temp = (x+y)*z;
	if(temp > max)
		max = temp;
	temp = x+y+z;
	if(temp > max)
		max = temp;

	printf("%d\n", max);
	return 0;
}
