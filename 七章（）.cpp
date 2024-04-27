#include<stdio.h>
int main()
{
	int ct(int ct[], int x, int y);
	int a[10],i,j,k,t;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<9;j++)
	{
		for(i=0;i<9-j;i++)
		ct(a,j,j+1);
	}
	for(j=0;j<10;j++)
	printf("%d ",a[j]);
	return 0;
}
void ct(int ct[], int x, int y)
{
	int t;
	if(ct[x]>ct[y])
	{
		t=ct[x];
		ct[x]=ct[y];
		ct[y]=t;
	}
}