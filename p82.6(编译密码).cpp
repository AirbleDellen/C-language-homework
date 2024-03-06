#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5;
	//为变量分配内存
	c1=getchar();
	c2=getchar();
	c3=getchar();
	c4=getchar();
	c5=getchar();
	//为变量输入字符
	c1=c1+4;
	c2=c2+4;
	c3=c3+4;
	c4=c4+4;
	c5=c5+4;
	 // 输出加密后的字符
	printf("\n%c%c%c%c%c",c1,c2,c3,c4,c5);
	return 0;
}