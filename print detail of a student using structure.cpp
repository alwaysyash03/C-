#include <stdio.h>
// define a structure named student
struct student {
    char name[50]; // to store the name of the student
    int roll; // to store the roll number of the student
    float marks; // to store the marks of the student
};

int main() {
    // declare a structure variable of type student
    struct student s;
    // input the values for the structure members
    printf("Enter the name of the student: ");
    scanf("%s", s.name);
    printf("Enter the roll number of the student: ");
    scanf("%d", &s.roll);
    printf("Enter the marks of the student: ");
    scanf("%f", &s.marks);
    // print the values of the structure members
    printf("The details of the student are:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
    return 0;
}

