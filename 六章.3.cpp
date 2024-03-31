#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0,sum=0,a[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		sum=sum+a[i][i];
	}
	printf("sum=%d",sum);
	return 0;
}