#include<stdio.h>
#define N 20
int main()
{
	int a[N][N],i,j,t;
	for(i=0,j=0;i<N;i++,j++)
	{
		a[i][0]=1;
		a[i][j]=1;
	}
	for(i=2;i<N;i++)
	{
		for(j=1;j<i;j++)
		{
			a[i][j]=a[i-1][j]+a[i-1][j-1];
		}
	}
	for(i=0;i<N;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%-8d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}