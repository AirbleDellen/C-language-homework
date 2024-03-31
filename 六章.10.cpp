#include<stdio.h>
#include<string.h>
int main()
{
	char a[3][80];
	int c1=0,c2=0,c3=0,c4=0,c5=0,i,j;
	for(i=0;i<3;i++)
	{
		gets(a[i]);
	}
	for(i=0;i<3;i++)
	{
		j=0;
		while(a[i][j]!='\0'&&j<80)
		{
			if (a[i][j]>=65&&a[i][j]<=90)
		{
			c1++;
		}
		else if(a[i][j]>=97&&a[i][j]<=122)
		{
			c5++;
		}
		else if (a[i][j]>=48&&a[i][j]<=57)
		{
			c2++;
		}
		else if (a[i][j]==32)
		{
			c3++;
		}
		else
		{
			c4++;
		}
		j++;	
		}
	}
	printf ("小写英文字符：%d\n大写英文字符：%d\n数字字符：%d\n空格：%d\n其他：%d",c5,c1,c2,c3,c4);
	return 0;
}