#include<stdio.h>
int main ()
{
	int a,b,c,d,i=0;
	for(a=100;a<=999;a++)//检测100~999每一个三位数
	{
		b=a/100;
		c=a/10%10;
		d=a%10;
		if (b*b*b+c*c*c+d*d*d==a)
		//水仙花数检测
		{
			i++;
			printf("%-5d",a);
			if (i==5)//使输出时，每5个数换一次行
			{
				printf("\n");
			}
		}
	}
	return 0;
}