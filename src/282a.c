#include<stdio.h>

int main ()
{

 
	char a[4];
	int x=0;
	


	int n;
	scanf("%d", &n);

	while (n--)
	{
           scanf("%s", a);
		
	   if ((a[0] == '+') || (a[2] == '+' ) )
		   x++;
	   else if ((a[0] =='-') || (a[2] == '-' ))
		   x--;
	}


	printf("%d\n", x);
	x = 0;
	return 0;
}

