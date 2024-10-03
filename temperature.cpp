#include<stdio.h>
int main()
{
	float  temp;
	printf("enter the temperature in centigrade");
	scanf("%f",&temp);
	if(temp<0)
	printf("freezing weather");
	else if(temp<10)
	printf("very cold weather\n");
	else if(temp<20)
	printf("cold weather\n");
	else if(temp<30)
	printf("normal in temperature\n");
	else if(temp<40)
	printf("it is hot\n");
	else 
	printf("it is very hot\n");
	return 0;
}
