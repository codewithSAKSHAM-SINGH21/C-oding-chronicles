#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char name[50];
    int age;
    float marks;
};
struct Student students[100];
int count = 0;
void addStudent()
{
    printf("\nEnter Student ID: ");
    scanf("%d", &students[count].id);
    printf("Enter Name: ");
    scanf("%s", students[count].name);
    printf("Enter Age: ");
    scanf("%d", &students[count].age);
    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);
    count++;
    printf("\nStudent Added Successfully!\n");
}
void displayStudents()
{
    int i;
    if(count == 0)
    {
        printf("\nNo students found.\n");
        return;
    }
    printf("\n----- Student List -----\n");
    for(i = 0; i < count; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }
}
void searchStudent()
{
    int id, i, found = 0;
    printf("\nEnter Student ID to search: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++)
    {
        if(students[i].id == id)
        {
            printf("\nStudent Found!\n");
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Age: %d\n", students[i].age);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("\nStudent not found.\n");
    }
}
void deleteStudent()
{
    int id, i, j, found = 0;
    printf("\nEnter Student ID to delete: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++)
    {
        if(students[i].id == id)
        {
            for(j = i; j < count - 1; j++)
            {
                students[j] = students[j + 1];
            }
            count--;
            found = 1;
            printf("\nStudent deleted successfully.\n");
            break;
        }
    }
    if(found == 0)
    {
        printf("\nStudent not found.\n");
    }
}
void updateStudent()
{
    int id, i, found = 0;
    printf("\nEnter Student ID to update: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++)
    {
        if(students[i].id == id)
        {
            printf("\nEnter New Name: ");
            scanf("%s", students[i].name);
            printf("Enter New Age: ");
            scanf("%d", &students[i].age);
            printf("Enter New Marks: ");
            scanf("%f", &students[i].marks);
            printf("\nStudent updated successfully!\n");
            found = 1;
            break;
        }
    }
    if(found == 0)
    {
        printf("\nStudent not found.\n");
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("\n===== Student Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Delete Student\n");
        printf("5. Update Student\n");
        printf("6. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                deleteStudent();
                break;
            case 5:
                updateStudent();
                break;
            case 6:
                printf("\nExiting program...\n");
                return 0;
            default:
                printf("\nInvalid choice. Try again.\n");
        }
    }
    return 0;
}