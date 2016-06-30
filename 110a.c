#include<stdio.h>

int main ()
{
	long long int a;
	scanf("%lld", &a);

	long long int b =a;
	long long int c = 0;
	long long int temp;
	while (b>0)
	{
		temp = b%10;
		if ((temp == 4) || (temp == 7))
			c++;
		b=b/10;
	}

	long long int d = c;
	long long t;
	long long int x=0;

	while(d>0)
	{	
		t = d%10;
		if((t!=4) && (t!=7))
		{
			x=1;
			break;
		}
		d=d/10;
	}

	if (x==0 && c!=0)
		printf("YES\n");
	else
		printf("NO\n");
	return (0);

}



		



