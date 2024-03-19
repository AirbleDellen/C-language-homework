#include<stdio.h>
int main()
{
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>b)
	{
		if (a>c)
		printf("%lf",a);
		else
		printf("%lf",c);
	}
	else if (b>c)
	{
		printf("%lf",b);
	}
	else if (c>b)
	{
		printf("%lf",c);
	}
	return 0;
	}