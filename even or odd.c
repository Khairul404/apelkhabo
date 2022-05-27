#include<stdio.h>
int main()
{
    int number;
    printf("Enter the Number = ");
    scanf("%d",&number);
    if(number&1)  /// n/2 != 0
    {
        printf("%d is Odd.\n",number);
    }
    else
    {
        printf("%d is Even.\n",number);
    }
}

