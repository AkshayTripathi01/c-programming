#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if((ch>='a'&& ch<='z')||ch>='A'&& ch<='Z')
	printf("alphabet");
	else
	printf("not alphabet");
	return 0;
}
