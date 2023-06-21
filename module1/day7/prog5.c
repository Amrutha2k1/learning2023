#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define MAX_STUDENTS 100

typedef struct {
    char name[MAX_NAME_LENGTH];
    int age;
    // Add other fields as needed
} Student;

Student students[MAX_STUDENTS]; // Array of structures

// Function to perform search operation on the array of structures
int searchByName(const char* name, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    // Example usage
    int numStudents = 4;
    
    // Populate the array of structures
    strcpy(students[0].name, "Ammu");
    students[0].age = 20;
    
    strcpy(students[1].name, "Ram");
    students[1].age = 22;
    
    strcpy(students[2].name, "Janani");
    students[2].age = 23;
    
    strcpy(students[3].name, "Ravi");
    students[3].age = 21;

    // Perform search operation
    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    
    int index = searchByName(searchName, numStudents);
    
    if (index != -1) {
        printf("Student found at index %d\n", index);
        printf("Name: %s\n", students[index].name);
        printf("Age: %d\n", students[index].age);
    } else {
        printf("Student not found.\n");
    }
    
    return 0;
}