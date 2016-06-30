#include<stdio.h>
#include<string.h>

int main ()
{
	char a[1001];

	int b[123] = {0};

	scanf("%[^\n]s", a);
	int f = strlen(a);

	int i;
	int c = 0;
	for (i=1;i < f;i=i+3)
	{
		b[a[i]]+=1;
	}

	for (i=97; i<123;i++)
	{
		if(b[i]!=0)
			++c;
	}

	printf("%d\n",c);
	return 0;
}
	
