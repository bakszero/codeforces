#include<stdio.h>
int main ()
{
	int n;
	int a[101]={0};

	scanf("%d", &n);

	int l=0;
	int b[3]={0};
	for (l=0;l<n;l++)
		scanf("%d", &a[l]);

	int i,j,k;
	int c=0;
	for(i=n-1;i>=0;i--)
		for(j=i-1;j>=0;j--)
			for(k=j-1;k>=0;k--)
			{
				if((a[i]==a[j]+a[k]) && a[i]<=5 && a[j]<=5 && a[k]<=5)
				{
					c=1;
					b[0]=a[i];
					b[1]=a[j];
					b[2]=a[k];
					//break;
				}
			}
	if(c==0)
		printf("-1\n");
	else
		printf("%d %d %d\n",b[0],b[1],b[2]);
	return 0;
}


