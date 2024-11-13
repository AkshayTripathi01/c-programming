#include<stdio.h>
int main()
{
	int a[100],i,pos,size;
	printf("enter the size of array");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array is");
	for(i=0;i<size;i++)
	{printf("\n %d",a[i]);
	}
	printf("enter position for deletion");
	scanf("%d",&pos);
	for(i=pos-1;i<size;i++)
	{
		a[i]=a[i+1];
	}
	printf("array after deletion");
	for(i=0;i<size-1;i++)
	{
		printf("\n %d",a[i]);
	}
	return 0;
}
