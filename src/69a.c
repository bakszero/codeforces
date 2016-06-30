#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);

	int x, y, z;
	int xs=0,ys=0,zs=0;
	while(n--)
	{
		scanf("%d %d %d", &x, &y, &z);

		xs+=x;
		ys+=y;
		zs+=z;
	}

	if( xs==0 && ys==0 &&zs==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
