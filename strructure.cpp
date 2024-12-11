#include<stdio.h>
struct Hotel{
char name[20];
char add[100];
char grade;
int roomch;
int roomnum;
};
void hotelDetail(struct Hotel h[5],char grade){
	int i;
for(i=0;i<5;i++){
	if(grade==h[i].grade){
		printf("%s",h[i].name);
		printf("%s",h[i].add);
		printf("%c",h[i].grade);
		printf("%d",h[i].roomch);
		printf("%d",h[i].roomnum);
		break;
	}
}
}
int main() {
	struct Hotel h[5];
	for(int i=0;i<5;i++){
		printf("hotel name:");
		scanf("%s",h[i].name);
		printf("hotel address:");
		scanf("%s",h[i].add);
		printf("hotel grade(A,B,C,D,E):");
		scanf(" %c",&h[i].grade);
		printf("hotel roomcharge:");
		scanf("%d",&h[i].roomch);
		printf("hotel roomnum:");
		scanf("%d",&h[i].roomnum);
	}
	char grade;
	printf("enter the grade (A,B,C,D,E):");
	scanf(" %c",&grade);
	hotelDetail(h,grade);
	return 0;

}
