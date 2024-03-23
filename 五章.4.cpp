#include<stdio.h>
int main()
{
	char c;
	int c1=0,c2=0,c3=0,c4=0;
	while ((c=getchar())!='\n')
	{
		if ((c>=65&&c<=90)||(c>=97&&c<=122))
		{
			c1=c1+1;
		}
		else if (c>=48&&c<=57)
		{
			c2=c2+1;
		}
		else if (c==32)
		{
			c3=c3+1;
		}
		else
		{
			c4=c4+1;
		}
		
	}
	printf ("英文字符：%d\n数字字符：%d\n空格：%d\n其他：%d",c1,c2,c3,c4);
}