#include<stdio.h>
#include<string.h>
int main ()
{
	char a[102];

	scanf("%s", a);

	int p=0,q=0,r=0,s=0;
	s=0;
	int i;
	for (i=0;i<strlen(a);i++)
	{
		if (a[i]=='h')
			p++;
		else if(p>0 && a[i]=='e')
			q++;
		else if (p>0 && q>0 && a[i]=='l')
			r++;
		else if (p>0 && q>0 && r>1 && a[i]=='o')
			s++;
	}
	//printf("p is %d\nq is %d\nr is %d\ns is %d\n",p,q,r,s);

	if(p>0 && q>0 && r>1 && s>0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}

