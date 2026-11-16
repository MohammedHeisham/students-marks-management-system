#include <stdio.h>

int main()
{
    int choice;

    printf("STUDENT MARKS MANAGEMENT SYSTEM\n");
    printf("--------------------------------\n");

    printf("1. Add Student\n");
    printf("2. View Students\n");
    printf("3. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Add Student Selected\n");
            break;

        case 2:
            printf("View Students Selected\n");
            break;

        case 3:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}
