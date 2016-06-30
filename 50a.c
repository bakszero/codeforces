#include<stdio.h>

int main ()
{
	int m, n;
	scanf("%d %d", &m, &n);

	int ans =0 ;
	int w, x;
	if (m%2==0 && n%2==0)
	{
		if(m>=n)
		{
			w = m/2;
			x = n;
			ans = w*x;
		}
		else
		{
			w = m;
			x = n/2;
			ans = w*x;
		}
	}
	else if( m%2==0 && n%2!=0)
		{
			 w = m/2;
			 x = n;
			ans = w*x;
		}
	else if (m%2!=0 && n%2==0)
	{
		w = m;
		x = n/2;
		ans = w*x;
	}
	else
	{
		w = m/2;
		x = n;
		ans = w*x + (n/2);
	}
		printf("%d\n", ans );
		return 0;
	}
