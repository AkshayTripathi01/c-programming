#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	switch(num%2==0)
	{
		case 0:
			printf("%d is an odd no",num);
			break;
		case 1:
			printf("%d is an even no",num);
			break;
		default:
			printf("invalid input");
		}
		return 0;
	}

