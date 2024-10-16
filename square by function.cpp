#include<stdio.h>
int square();
int main()
{
	int result=square();
	printf("result is %d",result);
	return 0;
}
int square()
{
	int a;
	printf("enter value of a");
	scanf("%d",&a);
	return a*a;
}
