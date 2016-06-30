#include<stdio.h>
int main ()
{
	int k, m;
	scanf("%d %d", &m, &k);

	int temp = m%k;

	printf("%d\n", temp);
	return 0;
}
