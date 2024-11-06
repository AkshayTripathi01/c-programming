#include<stdio.h>
void swap(int *,int *);
int main()
{
	int a=10,b=20;
	printf("before swapping \n a=%d b=%d \n",a,b);
	swap(&a,&b);
	printf("after swapping \n a=%d b=%d \n",a,b);
	return 0;
}
void swap(int *a,int *b) 
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("after swapping \n a=%d b=%d \n",*a,*b);
}

