#include<stdio.h>

int main ()
{
	long long int n,k;
	scanf("%lld %lld", &n, &k);
	long long int ans = 0;
	if(n%2==0)
	{
		if(k <= (n/2))
		{
			ans = 2*k - 1;
		}
		else
		{
			long long int i = k-(n/2);
			ans = 2*i ;
		}
	}
	else
	{
		if(k<= ((n/2)+1))
		{
			ans = 2*k - 1;
		}
		else
		{
			long long int i = k - (n+1)/2;
			ans = 2*i;
		}
	}
	printf("%lld\n", ans );
	return 0;
}

