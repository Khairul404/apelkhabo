#include <stdio.h>
struct student
{
    char firstName[50];
    int roll,age;
}
s[5];

int main() {
    int i;
    printf("Enter information of students:\n");

    // storing information
    for (i = 0; i < 5; i++) {
        s[i].roll = i + 1;
        printf("Roll number = 19060%d\n", s[i].roll);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
    }
    printf("\nDisplaying Information:\n\n");

    // displaying information
    for (i = 0; i < 5; i++) {
        printf("\nRoll number: 19060%d\n", i + 1);
        printf("First name: %s\n",s[i].firstName);
        printf("Age: %d", s[i].age);
        printf("\n");
    }
    return 0;
}
