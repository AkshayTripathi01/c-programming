#include<stdio.h>
void alpha();
void apl();

int main(){
	alpha();
	
	return 0;
}
void alpha(){
	
	char ch;
	scanf("%c",&ch);
	
	if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'){
		printf("vowel");
	}
	else{
		printf("consonent");
	}

	}

