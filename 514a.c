#include<stdio.h>
#include<string.h>

int main ()
{
	char a[19];

	scanf("%s", a);
	
	int i;
	for(i=0;i<strlen(a);i++)
	{
		if (a[0]=='9' && i==0)
			continue;
		if((9-a[i]+'0') < (a[i]-'0'))
		{
			int x = 9 - a[i]+'0';
			a[i] = x + '0';
		}
	}
	
	for (i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
	return 0;
}



