#include<stdio.h>
#include<math.h>
int main ()
{
	int e,f,g;
	int n;
	scanf ("%d %d %d %d", &n, &e, &f, &g);

	int i;
	int c =0 ,b=0;

	int p,q,jj;
	int fy = 0;
	
		for (p=0;p<=n;p++)
		{
			for(q=0;q<=n;q++)
			{
				 jj =((n-(e*p)-(f*q)));
				if(((jj%g)==0) && jj>=0)
				{
					
					if (fy < (p+q+(jj/g)))
					{
						fy = p+q+(jj/g);
					}
					
					
				}

			}
		
		}
		b = fy;

	printf("%d\n", b);
	return 0;
}

