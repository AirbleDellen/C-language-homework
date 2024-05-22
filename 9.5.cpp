#include<stdio.h>
struct STU
	{
	int num;
	char name[10];
	int score[3];
	}
	stu[10];
void input(struct STU a[]);
int main()
{
	float a,avg;
	int i,j,t,p[3];
	input (stu);
	for(i=0;i<10;i++)
	{
		for(j=0;j<3;j++)
		a=a+stu[i].score[j];
	}
	a=a/30.0;
	printf("\n总平均成绩=%f",a);
	for(i=0;i<3;i++)
	{
		t=0;
		for(j=0;j<9;j++)
		{
			if(stu[t].score[i]<stu[1+j].score[i])
			{
				t=1+j;
			}
		}
		p[i]=t;
	}
	for(i=0;i<3;i++)
	{
		printf("\n");
		printf("%d %s ",stu[p[i]].num,stu[p[i]].name);
		for(j=0;j<3;j++)
		{
			printf("%d ",stu[p[i]].score[j]);
			avg=avg+stu[p[i]].score[j];
		}
		avg=avg/3;
		printf("平均成绩：%.2f",avg);
		avg=0;
	}
	return 0;
}
void input(struct STU a[])
{
	int i,j;
	printf("请依次输入数据，以空格隔开\n");
	for(i=0;i<10;i++)
	{
		scanf("%d %s ",&a[i].num,a[i].name);
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i].score[j]);
		}
	}
}
