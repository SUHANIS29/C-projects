#include <stdio.h>

// Define structure for Student
struct Student {
    char name[50];
    int age;
    int totalMarks;
};

int main() {
    // Declare variables to store data for two students
    struct Student student1, student2;

    // Input data for the first student
    printf("Enter details for student 1:\n");
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Age: ");
    scanf("%d", &student1.age);
    printf("Total Marks: ");
    scanf("%d", &student1.totalMarks);

    // Input data for the second student
    printf("\nEnter details for student 2:\n");
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Age: ");
    scanf("%d", &student2.age);
    printf("Total Marks: ");
    scanf("%d", &student2.totalMarks);

    // Display information of both students
    printf("\nInformation of student 1:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Total Marks: %d\n", student1.totalMarks);

    printf("\nInformation of student 2:\n");
    printf("Name: %s\n", student2.name);
    printf("Age: %d\n", student2.age);
    printf("Total Marks: %d\n", student2.totalMarks);

    // Calculate and display the average of total marks
    float average = (student1.totalMarks + student2.totalMarks) / 2.0;
    printf("\nAverage of Total Marks: %.2f\n", average);

    return 0;
}
