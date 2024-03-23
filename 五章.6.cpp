#include<stdio.h>
int  main()
{
	int i=1,n=1;
	long long sum=0,c1=0;
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