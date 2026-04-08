//Create a structre student with student name,age,and total marks.write a program to input data of two students and display their information with the average of total marks.
#include <stdio.h>   

struct Student {
    char name[50];
    int age;
    float totalMarks;
};
int main() {
    struct Student s[2];
    int i;
    float average;
    for (i = 0; i < 2; i++) {
        printf("\nEnter details of Student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Total Marks: ");
        scanf("%f", &s[i].totalMarks);
    }
    printf("\n--- Student Information ---\n");
    for (i = 0; i < 2; i++) {
        printf("\nStudent %d", i + 1);
        printf("\nName: %s", s[i].name);
        printf("\nAge: %d", s[i].age);
        printf("\nTotal Marks: %.2f\n", s[i].totalMarks);
    }
    average = (s[0].totalMarks + s[1].totalMarks) / 2;
    printf("\nAverage of Total Marks: %.2f\n", average);
    return 0;
}

