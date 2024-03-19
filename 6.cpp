#include<stdio.h>
int main()
{
	double y,x,t;
	scanf("%lf",&x);
	if (x<1)
	{
		y=x;
		printf("y=%-10.2lf",y);
	}
	else if (1<=x<10)
	{
		y=2*x-1;
		printf("y=%-10.2lf",y);
	}
	else
	{
		y=3*x-11;
		printf("y=%-10.2lf",y);
	}
	return 0;
}