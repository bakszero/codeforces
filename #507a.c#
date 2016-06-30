#include<stdio.h>
#include<stdlib.h>

int cmp(const void * a, const void * b )
{
	return( *(int* ) a - *(int*) b);

}

int main ()
{
	int n, k;
	scanf("%d", &n);
	scanf("%d", &k);

	int a[n];

	int v = 0;
	for (v=0; v<n;v++)
	{
		scanf("%d", &a[v]);
	}
	int b[n];
	int p,q=0;
	for (p=0; p < n;p++)
	{
		b[p]=a[p];
	}

	qsort(a,n,sizeof(int), cmp);
	
	int d, e;
	/*for ( d= 0 ; d < n-1; d++)
	{
		for ( e = 0 ; e< n-1-d;e++)
		{
			if (a[e]>a[e+1])
			{
				int temp = a[e];
				a[e] = a[e+1];
				a[e+1] = temp;
			}
		}
	}*/
	int i;
	int c=0;
	c = 0;
	for (i =0; i < n; i++)
	{
		c=c+a[i];

		if ( c==k)
		{
			q = i;
			break;
		}
		else if ( c>k)
		{
			q =i-1;
			break;
		}
		
		if (i==(n-1) && c<k)
		{
			q = i;
			break;
		}
	

	}
	int cs[q+1];
	int g=0;
	int s=0,r=0;
	for (s=0;s<n;s++)
	{
		for ( r = 0 ; r <=q; r++)
		{
			if (a[r]==b[s])
					 
			{
				cs[g]=(s+1);
				g++;
				a[r]=-1;
				break;	

			}
		}
		
	
	}
	
	
	printf("%d\n", q+1);
	
	int y;
	
	if (q>-1)
	{
		for ( y =0; y<= q; y++)
	{
		printf("%d ",cs[y]);
	}
	printf("\n");
	}
	
	return 0;
}




