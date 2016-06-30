#include<stdio.h>
int main ()
{
	int x, y , a , b;
	scanf("%d %d %d %d", &x, & y, &a, &b);

	int i;
	int c=0;
	for(i=a;i<=b;i++)
	{
		if(i%x==0 && i%y==0)
			c++;
	}
	printf("%d\n", c);
	return 0;
}

