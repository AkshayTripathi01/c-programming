#include<stdio.h>
int max();
int main()
{
	int result=max();
	printf("result is %d",result);
	return 0;
}
int max()
{
	int a,b;
	printf("enter the value of a ,b");
	scanf("%d%d",&a,&b);
	if(a>b)
	return a;
	else
	return b;
}
