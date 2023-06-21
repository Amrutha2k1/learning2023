#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStructArray(struct Student *students, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        
        printf("Roll No: ");
        scanf("%d", &(students[i].rollno));

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &(students[i].marks));

        printf("\n");
    }
}

int main() {
    const int arraySize = 5;
    struct Student students[arraySize];

    initializeStructArray(students, arraySize);

    printf("Initialized Structure Array:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Student %d: Roll No - %d, Name - %s, Marks - %.2f\n",
               i + 1, students[i].rollno, students[i].name, students[i].marks);
    }

    return 0;
}