#include <stdio.h>


struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    struct Student students[5];  
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);

        
        printf("Enter Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);

        printf("Enter Roll No: ");
        scanf("%d", &students[i].rollNo);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        
        getchar();
    }

    
    printf("\nDetails of all students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s", students[i].name);  
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}

