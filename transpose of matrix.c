#include<stdio.h>
int main()
{
	int a[2][3],i,j,b[2][3];
	printf("enter 6 elemenrt");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++){
			b[i][j]=a[j][i];
		}
	}
	printf("transpose of matrix");
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

