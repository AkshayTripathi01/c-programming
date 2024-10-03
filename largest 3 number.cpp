#include<stdio.h>
int main()
{
	int a,b,c;
	if(a>=b)
	{ if(a>=c)
	printf("a is largest no %d",a);
	else
	printf("c is largest no %d",c);
	}
	else
	{
		if(b>=c)
		printf("b is largest no %d",b);
		else
		printf("c is largest no %d",c);
	}
	return 0;
}
