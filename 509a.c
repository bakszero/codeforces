#include<stdio.h>

int f(int i, int j)
{
	if(i==1)
		return 1;
	if(j==1)
		return 1;
	return f(i-1,j) + f(i,j-1);
}



int main ()
{
	int q;

	scanf("%d", &q);

	int ans = f(q,q);

	printf("%d\n", ans);
	return 0;
}

