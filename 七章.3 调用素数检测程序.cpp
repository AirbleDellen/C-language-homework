#include<stdio.h>
#include<math.h>
int main()
{
	int C(int x);
	int a;
	printf("需判断数字=");
	scanf("%d",&a);
	if(C(a))
	printf("该数字为素数");
	else
	printf("该数字不是素数");
	return 0;
}
int C(int x)
{
	int i,t;
	for(i=2;i<sqrt(x)+1;i++)
	{
		t=1;
		if(x%i==0)
		{
			t=0;
			break;
		}
	}
	return t;
}