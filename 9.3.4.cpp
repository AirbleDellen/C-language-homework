#include<stdio.h>
struct STU
	{
	int num;
	char name[10];
	int score[3];
	}
	stu[5];
void print(struct STU a[]);
void input(struct STU a[]);

int main()
{
	input (stu);
	print (stu);
	
}
void input(struct STU a[])
{
	int i,j;
	printf("请依次输入数据，以“,”隔开\n");
	for(i=0;i<5;i++)
	{
		scanf("%d,%s,",&a[i].num,a[i].name);
		for(j=1;j<3;j++)
		{
			scanf("%d",&a[i].score[j]);
		}
	}
}
void print(struct STU a[])
{
	int i,j;
	printf("\n以下为输出数据，请核对");
	for(i=0;i<5;i++)
	{
		printf("\n");
		printf("%d,%s,",a[i].num,a[i].name);
		for(j=1;j<3;j++)
		{
			printf("%d ",a[i].score[j]);
		}
	}
}
