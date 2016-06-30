#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);

	int a[n];

	int k;
	int one=0,zero=0;
	for(k=0;k<n;k++)
	{
		scanf("%d",&a[k]);

		if (a[k]==0)
			zero++;
		else 
			one++;
	}
	int count = 0;
	int wc = 0;

	for (k=0;k<n;k++)
	{
		if (a[k]==0)
		{
			wc++;
		}
		if(a[k]==0 && a[k+1]==0)
			count++;
	}
	
	if (count==0 && wc!=0)
	{
		one++;
	}
	else if (wc==0 && count==0 && one==1)
	{
		one = 0;
	}
	else if (wc==0 && count==0 )
	{
		one--;
	}
	else
		one =  one + count + 1;

	printf("%d\n", one);
	return 0;
}











