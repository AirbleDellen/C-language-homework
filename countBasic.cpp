#include<stdio.h> ///定义主函数
int main()
{
	int a,b,sum;
	a=839;
	b=928;
	sum=a=b;
	printf("sum is \n%d", sum);     //("sum is \n%d", sum)中，第一个"sum is \n%d"表示输出字符“sum is”随后换行（\n）,并将%d以十进制形式替换为变量sum（第二个printf中的变量）
	return 0;//程序结束
}
