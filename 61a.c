#include<stdio.h>
#include<string.h>

int main ()
{
	char a[101];
	char b[101];
	int c[101];
	scanf("%s", a);
	scanf("%s", b);
	
	int l = strlen(a);
	
	int i;
	for (i=0;i<l;i++)
	{
		c[i]=((int)a[i]^(int)b[i]);
	}
	
	for (i=0;i<l;i++)
	{
		printf("%d",c[i]);
	}
	printf("\n");
	return 0;
}
