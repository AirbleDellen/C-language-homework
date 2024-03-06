#include <stdio.h>
int main()
{
	int a,b;
	float x,y;
	char c1,c2;
	scanf("a=%db=%d",&a,&b);
	scanf("%f%e",&x,&y);
	scanf("%c%c",&c1,&c2);
	printf("a=%d\n,b=%d\n,x=%f\n,y=%e\n,c1=%c\n,c2=%c\n",a,b,x,y,c1,c2);
	return 0;
}