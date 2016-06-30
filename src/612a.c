#include<stdio.h>

int main ()
{
	int n,p,q;
	scanf("%d %d %d", &n, &p, &q);

	char a[100];
	scanf("%s", a);


	int i =0;
	int k =0;

	int j =0;
	int flag =0;
	while ( )
	{
		if (n-(


	if((p+q)==n)
	{
		printf("2\n");
		for ( i = 0; i < p;i++)
			printf("%c", a[i]);
		printf("\n");
		for( i = p ; i < n;i++)
			printf("%c", a[i]);
		printf("\n");
	}






	else if (n%p==0)
	{
		printf("%d\n", n/p);
		for(k=0;k<n;k=k+p)
		{
			i=k;
			int x = p;

			while(x--)
			{
				printf("%c", a[i]);
				i++;
			}

			printf("\n");
		}
		//printf("\n");
	}
	else if (n%q==0)
	{
		printf("%d\n", n/q);

		for ( k = 0; k < n ; k=k+q)
		{	i=k;
			int x = q;
			while(x--)
			{
				printf("%c", a[i]);
				i++;
			}
			printf("\n");
		}
		//printf("\n");
	}

	else if ((p < n) && ((n-p)%q==0))
	{
		printf("%d\n", (n/p)+(n-p)%q);

		for(k=0;k<(n-p);k=k+p)
		{
			i =k;
			int x = p;

			while(x--)
			{
				printf("%c",a[i]);
				i++;
			}
			printf("\n");
		}

		k = k-p;

		while(k < n)
		{
			i =k;
			int x = q;

			while(x--)
			{
				printf("%c",a[i]);
				i++;
			}
			printf("\n");
			k=k+q;
		}
	}
	else if ((q < n) && ((n-q)%p==0))
	{
		printf("%d\n", (n/q)+(n-q)%p);

		for(k=0;k<(n-q);k=k+q)
		{
			i =k;
			int x = q;

			while(x--)
			{
				printf("%c",a[i]);
				i++;
			}
			printf("\n");
		}

		k = k-q;

		while(k < n)
		{
			i =k;
			int x = p;

			while(x--)
			{
				printf("%c",a[i]);
				i++;
			}
			printf("\n");
			k=k+p;
		}

			
	}
	else
			printf("-1\n");
		return 0;
	}




