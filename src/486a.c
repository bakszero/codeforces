#include<stdio.h>
#include<math.h>

int main ()
{
	long long int n ;
	scanf("%lld", &n);

	long long int ans=0;

	if(n%2==0)
		ans = n/2;
	else
	{
		ans = (n/2) -n;
	}
	printf("%lld\n", ans);
	return 0;
}
