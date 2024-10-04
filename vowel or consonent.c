#include<stdio.h>
int main()
{
	char ch;
	printf("enter character");
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
printf("%c vowel",ch);
else
printf("%c consonent",ch);
return 0;
}

