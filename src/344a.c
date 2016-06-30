#include<stdio.h>

int main ()
{
	int a[100000]={0};

	int n;
	scanf("%d", &n);
	
	int k =0;
	for (k =0 ; k < n ;k++)
	{
		scanf("%d",&a[k]);
	}

	int i;
	int c = 0;
	for (i= 0; i < n-1 ; i++)
	{
		if (a[i]==a[i+1])
			continue;
		c++;
	}
	printf("%d\n",c+1);
	return 0;
}
