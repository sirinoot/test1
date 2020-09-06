#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int i,n,j;
	scanf("%d",&n);
	for(int i = 0; i <= n; i++)
	{	
		for(j = 0;j<i;j++)
		{printf("* ");
		}
		printf("\n");
	}
	return 0;
}
