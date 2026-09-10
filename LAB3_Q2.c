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

    printf("enter your age: ");
    scanf("%d", &age);

    printf("enter your department: ");
    scanf("%s", department );

    printf("enter your section: ");
    scanf("%s", section);

    printf("enter your studentID: ");
    scanf("%s", studentID);

    printf("enter your university name: ");
    scanf("%s", UniversityName);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Department: %s\n", department);
    printf("Section: %s\n", section);
    printf("StudentID: %s\n", studentID);
    printf("University Name: %s\n", UniversityName);

}