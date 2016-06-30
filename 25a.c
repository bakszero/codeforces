#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	int a;
	int c= 0;
	int cc=0;
	int d =0;
	int dd=0;
	int k=0;
	for(k=0;k<n;k++)
	{
		scanf("%d", &a);

		if(a%2==0)
		{
			cc = k+1;
			c++;
		}
		else
		{
			dd=k+1;
			d++;
		}
	}
	if(d==1)
	{
		printf("%d\n", dd);
	}
	if(c==1)
	{
		printf("%d\n",cc);
	}
	return 0;
}

