#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int p,q,c=0;
	while(n--)
	{
		scanf("%d %d", &p, &q);

		if((q-p)>=2)
			c++;
	}
	printf("%d\n",c);
	return 0;
}

