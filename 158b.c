#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int n;
	scanf("%d", &n);
	 int four=0;
	    int three=0;
	    int two=0;
	    int one=0;
	int input;
	while (n--)
	{
		scanf("%d", &input);

		if (input == 4)
			four++;
		else if (input == 3)
			three++;
		else if (input==2)
			two++;
		else if (input == 1)
			one++;
	}

	int ans =0;
	int x =0, y=0 , z=0;
	if (three == one )
	{
		 x = three;
		y = (two/2);
		if ((two%2) != 0 )
			y++;
		ans = (four + x + y);
	}
	else if (one > three)
	{
		  x = three;
		  z = one - three;
		  y =  two/2;

		if ((two%2) == 0)
		{
			if ((z%4) == 0)
			ans = four + x + y + (z/4);
			else 
				ans = four + x + y + (z/4) + 1;
		}
		else

		{
			if ( ((z %4) == 0) || ((z % 4) == 1 ) || (((z%4)) == 2)) 
			{
				ans = four + x + y + (z/4) + 1;
			}
			else if (z%4 == 3)
			{
				ans = four + x + y + (z/4) + 2;
			}
		}
	}

	else
	{
		 x = three;
		 z = (three - one);

		 y = (two/2);
		
		if ( (two%2) == 0 )
			ans = four + x + y;
		else
			ans = four + x + y + 1;


	}

	printf("%d\n", ans);
	return 0;
}

































