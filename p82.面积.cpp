#include<stdio.h>
#include<math.h>
int main()
{
	float r,h,S1,S2,S3,S4,P;
	P=3.1415;
	printf("请以“r= ，h= 的形式输入数据");
	scanf("r=%f,h=%f",&r,&h);
	S1=2.0*r*P;
	S2=r*r*P;
	S3=4.0*P*pow(r, 2.0);
	S4=4.0/3.0*P*pow(r, 3.0);
	printf("圆的周长为%8.2f\n圆的周长为%8.2f\n球的表面积为%8.2f\n球的体积为%8.2\n",S1,S2,S3,S4);
	return 0;
}