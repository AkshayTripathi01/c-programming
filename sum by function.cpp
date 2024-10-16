#include<stdio.h>
int sum();
int main()
{
	int result=sum();
	printf("result is %d",result);
	return 0;
}
int sum()
{
	int a,b,sum;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	sum=a+b;
	return sum;
}
