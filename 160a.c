#include<stdio.h>
#include<stdlib.h>
int compare(const void* a, const void* b)
{
	return (*(int*)a-*(int*)b);
}
int main ()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int b[101]={0};
	int k=0;
	for(k=0;k<n;k++)
	{
		scanf("%d", &a[k]);
	}
	
	qsort(a,n,sizeof(int), compare);
	
	b[n-1]=a[0];
	for (k=n-2; k>=0;k--)
	{
		b[k] = b[k+1] + a[n-1-k];
	}

	int c=0;
	int ans =0;
	for (k=0; k < n ; k++)
	{
		c = c + a[n-1-k];

		if ( c > b[k+1])
		{
			ans = k+1;
			break;
		}
		
	}
	printf("%d\n",ans);
	
	int j;
	/*for(j=0;j<n;j++)
	{
		printf("b[%d] is %d\n", j,b[j]);
	}*/


	return 0;
}

