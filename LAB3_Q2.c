#include <stdio.h>

int main()
{
    int age;
    char name[50];
    char department[50];
    char section[3];
    char studentID[10];
    char UniversityName[50];

    printf("enter your name: ");
    scanf("%s", name);

    printf("\nenter your age: ");
    scanf("%d", &age);

    printf("\nenter your department: ");
    scanf("%s", department );

    printf("\nenter your section: ");
    scanf("%s", section);

    printf("\nenter your studentID: ");
    scanf("%s", studentID);

    printf("\nenter your university name: ");
    scanf("%s", UniversityName);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Department: %s\n", department);
    printf("Section: %s\n", section);
    printf("StudentID: %s\n", studentID);
    printf("University Name: %s\n", UniversityName);

}
