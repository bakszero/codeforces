#include<stdio.h>
#include<string.h>

int main ()
{
	char a[101];


	scanf("%s", a);

	int l = strlen (a);
	int flag = 0;

	int i;
	for (i=0;i<l;i++)
	{
		if (a[i]=='H' || a[i]=='Q' || a[i]=='9' )
			flag = 1;
	}
	if (flag == 1)
		printf("YES\n");
	else
		printf("NO\n");
return 0;
}
