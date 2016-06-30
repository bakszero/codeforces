#include<stdio.h>

int main ()
{
	int a[4]={0};
	scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);

	int i,j;
	int c=0;

	for(i=0;i<4;i++)
	{
		for(j=i+1;j<4;j++)
		{
			if (a[i]==a[j])
				c++;
		}
	}
	int ans ;
	if(c==0)
		ans = 0;
	else if (c==6)
		ans = 3;
	else if (c==3 || c==2)
		ans = 2;
	else
		ans = 1;

	printf("%d\n", ans );
	return 0;
}


