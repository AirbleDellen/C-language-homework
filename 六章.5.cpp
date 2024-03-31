#include<stdio.h>
#include<string.h>
int main()
{
	int i,a[5],t;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5/2;i++)
	{
		t=a[i];
		a[i]=a[4-i];
		a[4-i]=t;
	}
	for(i=0;i<5;i++)
	{
		printf(" %d",a[i]);
	}
	return 0;
}