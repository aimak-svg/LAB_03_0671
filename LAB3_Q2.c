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
    scanf("%[^\n]", name);

    printf("\n enter your age: ");
    scanf("%d", &age);

    printf("\n enter your department: ");
    scanf("%s", department );

    printf("\n enter your section: ");
    scanf("%s", section);

    printf("\n enter your studentID: ");
    scanf("%s", studentID);

    printf("\n enter your university name: ");
    scanf("%s", UniversityName);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Department: %s\n", department);
    printf("Section: %s\n", section);
    printf("StudentID: %s\n", studentID);
    printf("University Name: %s\n", UniversityName);

}
