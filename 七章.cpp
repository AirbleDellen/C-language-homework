#include<stdio.h>
int main()
{
	int i,j,k;
	int inter(int ff[][3]);int turn(int turn[][3]);
	int a[3][3];
	inter(a);
	turn(a);
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
	}
}
int inter(int ff[][3])
{
	int i,j,k;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&ff[i][j]);
	}
}
int turn(int turn[][3])
{
	int i,j,k,t;
	for(i=0;i<3;i++)
	{
		for(j=i+1;j<3;j++)
		{
			t = turn[i][j];
            turn[i][j] = turn[j][i];
            turn[j][i] = t;
		}
	}
}