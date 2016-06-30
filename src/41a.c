#include<stdio.h>
#include<string.h>

int main ()
{
	char a[101];
	char b[101];

	scanf("%s", a);
	scanf("%s", b);

	int l1 = strlen(a);
	int l2 = strlen(b);
	int c=0;
	if (l1!=l2)
		printf("NO\n");
	else
	{
		//if (l1%2==0)
		
			int i;
			for ( i = 0; i < l1; i++)
			{
				if (a[i] == b[l1 - i -1])
					c++;
			}
		
	
	if (c == l1)
		printf("YES\n");
	else
		printf("NO\n");
	}
	return 0;
}
			









