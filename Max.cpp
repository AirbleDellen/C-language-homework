#include<stdio.h>
#include<math.h>
int main()
{
	int a[5][5],i,j,t,k;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<5;i++)
	{
		t=a[i][0];
		k=0;
		for(j=0;j<5;j++)
		{
			if(t<abs(a[i][j]))
			{
				t=abs(a[i][j]);
				k=j;
			}
		}
		a[i][k]=a[i][i];
		a[i][i]=t;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
			if(j<4)
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}


