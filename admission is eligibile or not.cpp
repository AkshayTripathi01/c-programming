#include<stdio.h>
int main()
{
	int maths,phy,chem;
	printf("enter the marks obtained in physics");
	scanf("%d",&phy);
	printf("enter the marks obtained in mathematics\n");
	scanf("%d",&maths);
	printf("enter the mnarks obtained in chemistry\n");
	scanf("%d",&chem);
	if(maths>=65 && phy>=55 && chem>=50 &(maths+phy+chem)>=180)
	printf("candidate is eligible for admission\n");
	else if(maths+phy>=140)
	printf("the candidate is eligible for admission");
	else
	printf("the candidate is not eligible for admission");
	return 0;
	
}
