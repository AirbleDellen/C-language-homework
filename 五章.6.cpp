#include<stdio.h>
int  main()
{
	int i=1,n=1;
	long long sum=0,c1=0;
	//注意，此处将c1,sum都设置成longlong，防止过程中c1与sum溢出
	for(;i<=20;i++)
	{c1=1;
	 n=1;
		while(n<=i)
		{
		  c1=c1*n;
		  n++;		  
		}
	  sum=sum+c1;	
	}
  printf("%lld",sum);
  return 0;
}
