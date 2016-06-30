#include<stdio.h>
int a[101][201];
int main ()
{
	int n, m;
	scanf("%d %d", &n, &m);

	int y, h;
	for ( y = 0 ; y < 101; y++)
	{
		for ( h = 0 ; h < 201; h++)
		{
			a[y][h] = 0;
		}
	}
	
	int ff;
	int gg;
	/*for ( ff= 0 ; ff < n; ff++)
		for(gg=0;gg<m;gg++)*/
			
	//int a[100][200];
	int i =0;
	int z;
	for ( i = 0 ; i < n ; i++)
	{
		for ( z = 0; z < (2*m); z++)
		{
			scanf("%d", &a[i][z]);
		}	
	}

	int j, k;
	int count=0;
	for ( j = 0; j < n ; j++)
	{
		for ( k = 0 ; k < (2*m) ; k=k+2)
		{
			if ( (a[j][k] == 1) || (a[j][k+1] == 1) )
			{
				count++;
			}	
		}
	}

	printf("%d\n", count);

	return 0;
}

