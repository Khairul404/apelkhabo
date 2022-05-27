#include <stdio.h>
int num1,num2;
int max(num1,num2)
{
    return (num1 > num2 ) ? num1 : num2;
}
int min(num1,num2)
{
    return (num1 > num2 ) ? num2 : num1;
}
int main()
{
    int maximum, minimum;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);
    maximum = max(num1, num2);
    minimum = min(num1, num2);
    printf("Maximum = %d\n", maximum);
    printf("Minimum = %d", minimum);
    return 0;
}

