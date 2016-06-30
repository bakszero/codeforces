#include<stdio.h>
#include<stdlib.h>
typedef struct nod{
	int str;
	int bonus;
}drag;

int cmp(const void* a, const void* b)
{
	drag* dragon1 = (drag*) a;
	drag* dragon2 = (drag*) b;
	return (dragon1->str - dragon2->str);
}



int main ()
{
	int s , n;
	scanf("%d %d", &s, &n);

	drag dragon[n];

	int k;
	for (k=0;k<n;k++)
	{
		scanf("%d %d", &((dragon[k]).str), &((dragon[k]).bonus));
	}

	qsort(dragon,n,sizeof(drag),cmp);
	int ans = 0;


	int x = s;

	int i;
	for ( i = 0 ; i < n ; i++)
	{
		if ((i==(n-1)) && x>((dragon[i]).str))
		{	
			ans = 1;
			break;
		}

		if( x > (dragon[i].str))
		{
			x = x + ((dragon[i]).bonus);
		}
		else
		{
			break;
		}
	}

	if(ans == 1)
		printf("YES\n");
	else
		printf("NO\n");
	int j;
	/*	for(j=0;j<n;j++)
	{
		printf("dragon[%d].str is %d\tdragon[%d].bonus is %d\n", j , (dragon[j]).str, j, (dragon[j]).bonus);
	}*/

	return 0;

}








