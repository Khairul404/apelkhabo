#include<stdio.h>
int fact(int num)
{
    if (num==1)
        return 1;
    else
        return num*fact(num-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int factorial= fact(n);

    printf("%d",factorial);
}

