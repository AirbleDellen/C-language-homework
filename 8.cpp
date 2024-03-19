#include<stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf",&a);
	b=(int)a/10;
	switch((int)b)
	{
		case 10:
		case 9:
			printf("A");
			break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
			printf("D");
			break;
		default:printf("E");
	}
	return 0;
}