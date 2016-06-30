#include<stdio.h>
int main ()
{
	int n , k;

	scanf ("%d %d" , &n , &k);

	int a[50];
	
	int i;
	for ( i = 0 ;i <n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	int count =0 ;
	int j;
	int kr= a[k-1];

	for ( j = 0; j < n ; j++)
	{

		if ( a[j] != 0 && a[j] >= kr)
			count++;
	}

	printf("%d\n", count);
	return 0;
}





