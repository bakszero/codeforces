#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);
	
	char a[51];

	int i;
/*	for ( i = 0 ; i < n; i++)
	{
		scanf("%c", &a[i]);
		
		

	}
*/

	scanf("%s", a);
	int j;
	int c =0;

	for ( i = 0 ; i < n-1; i++)
	{
		if ((a[i]=='R' && a[i+1]=='R') || (a[i] == 'G' && a[i+1]=='G') || (a[i]=='B'  && a[i+1]=='B'))		
		{
					//a[i+1]='\0';
	         	c++;
		}
		
	}

	printf("%d\n", c);
	return 0;
}



	
