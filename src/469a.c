#include<stdio.h>

int main ()
{
	int n;
	scanf("%d", &n);

	int x,y;
	int temp;

	int a[n+1];
	int x1;
	for(x1=0;x1<=n;x1++)
	{
		a[x1]=0;
	}
	scanf("%d", &x);

	while(x--)
	{
		scanf("%d", &temp);
		a[temp]=1;
	}

	scanf("%d", &y);
	while(y--)
	{
		scanf("%d", &temp);
		a[temp]=1;
	}

	int i;
	int flag = 0;
	for(i=1;i<=n;i++)
	{
		if(a[i]==0)
		{
			flag = 1;
			break;
		}
	}

	if(flag==0)
	{
		printf("I become the guy.\n");
	}
	else
	{
		printf("Oh, my keyboard!\n");
	}
	return 0;
}
	
