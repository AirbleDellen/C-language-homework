#include<stdio.h>
int main()
{
	int a,b,c1,c2,c3,c4,c5,c6;
	scanf("%d",&a);
	if (a<10)
	{b=1;
		printf("1\n");
	}
	else if (a<100)
	{b=2;
		printf("2\n");
	}
	else if (a<1000)
	{b=3;
		printf("3\n");
	}
	else if (a<10000)
	{b=4;
		printf("4\n");
	}
	else if (a<100000)
	{b=5;
		printf("5\n");
	}
	if (b==1)
	{
	c1=a;
	printf("%d\n",c1);
	printf("%d\n",c1);
    }
    if (b==2)
    {
    	c1=a/10;
    	c2=a%10;
    	printf("%d,%d\n",c1,c2);
    	printf("%d%d\n",c2,c1);
	}
	if (b==3)
	{
		c1=a/100;
		c2=a/10%10;
		c3=a%100%10;
		printf("%d,%d,%d\n",c1,c2,c3);
		printf("%d%d%d\n",c3,c2,c1);
	}
	if (b==4)
	{
		c1=a/1000;
		c2=a/100%10;
		c3=a/10%10;
		c4=a%10;
		printf("%d,%d,%d,%d,%\n",c1,c2,c3,c4);
		printf("%d%d%d%d\n",c4,c3,c2,c1);
	}
	if (b==5)
	{
		c1=a/10000;
		c2=a/1000%10;
		c3=a/100%10;
		c4=a/10%10;
		c5=a%10;
		printf("%d,%d,%d,%d,%d\n",c1,c2,c3,c4,c5);
		printf("%d%d%d%d%d\n",c5,c4,c3,c2,c1);
	}
	return 0;
}