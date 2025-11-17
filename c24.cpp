#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,t;
	float avg;
	printf("enter &s1,&s2,&s3,&s4,&s5 value");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	t=s1+s2+s3+s4+s5;
	printf("total=%d",t);
	avg=t/5;
	printf("\n avg=%f",avg);
	return 0;
}
