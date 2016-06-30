#include<stdio.h>
#include<string.h>
int main ()
{
	char a[101];
	scanf("%s",a);
	int b[124]={0};
	int i;
	int f= 0, c= 0, fin=0;
	
	 f = strlen(a);


	int x=0;
	for (i = 0 ; i < f ; i++)
	{
		b[a[i]]+=1;
	}

	for ( i =97 ; i < 123;i++)
	{
		if (b[i] != 0)
			++x;
	}

	if(x%2==0)
		printf("CHAT WITH HER!\n");
	else
		printf("IGNORE HIM!\n");
	return 0;
}




