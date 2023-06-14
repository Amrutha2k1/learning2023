#include<stdio.h>

int fun(int rollno, char name[], int m, int p, int c);

int main() {
    int rollno;
    char name[50];
    int maths;
    int physics;
    int chemistry;

    printf("Enter Rollnumber: ");
    scanf("%d", &rollno);
    printf("Enter Name: ");
    scanf(" %[^\n]s", name);
    printf("Enter Maths marks: ");
    scanf("%d", &maths);
    printf("Enter Physics marks: ");
    scanf("%d", &physics);
    printf("Enter Chemistry marks: ");
    scanf("%d", &chemistry);
    fun(rollno,name,maths,physics,chemistry);
    return 0;
}

int fun(int rollno, char name[], int m, int p, int c) {
    int total;
    total = m + p + c;
    float percentage;
    percentage = (float)total / 300 * 100;

    printf("\n---------- Summary ----------\n");
    printf("RollNumber: %d\n", rollno);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", m);
    printf("Math Marks: %d\n", p);
    printf("Chemistry Marks: %d\n", c);
    printf("Total Marks: %d\n", total);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}