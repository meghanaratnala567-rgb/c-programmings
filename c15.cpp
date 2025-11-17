#include<stdio.h>
int main()
{
	int d,m,y,sum,lucky;
	printf("enter d,m,y value");
	scanf("%d%d%d",&d,&m,&y);
	sum=d+m+y;
	lucky=sum,lucky%d;
	printf("your lucky number is=%d",lucky);
	return 0;
}
