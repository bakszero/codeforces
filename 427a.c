#include<stdio.h>
int main ()
{
	int n;
	scanf("%d", &n);

	int a[100001]={0};
	int k =0 ;
	for (k=0; k<n;k++)
	{
		scanf("%d", &a[k]);

	}

	int i;
	int b=0;
	int c =0 ;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
		{
			b = b + a[i];

		}
		else if (a[i]<0)
		{
			if((b+a[i])<0)
			{
				++c;
			}
			else
			{  b = b+(a[i]);
			}
		}
	}


	printf("%d\n", c);
	return 0;
}

