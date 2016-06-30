#include<stdio.h>
#include<math.h>
int main ()
{
	int n;
	scanf("%d", &n);

	int a[n];

	int k;
	int min = 1001;
	for (k=0 ; k < n ; k++)
	{
		scanf("%d", &a[k]);
	}
	int x, y;
	for(k=0;k<n;k++)
	{
		if (k==(n-1))
		{
			if ((abs(a[0]-a[n-1])) < min)
			{
				min = abs(a[0]-a[n-1]);
				x = n;
				y = 1;
			}
		}
		
		else
		{
			if (abs(a[k]-a[k+1]) < min )
			{
				min = abs(a[k]-a[k+1]);
				x = k + 1;
				y = k + 2;
			}
		}
	}
	printf("%d %d\n",x, y);
	return 0;
}
	

		
