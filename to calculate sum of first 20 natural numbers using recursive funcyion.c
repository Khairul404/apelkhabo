#include<stdio.h>
int addition(int a,int b)
{
    return a+b;
}
int subtraction(int a,int b)
{
    return a-b;
}
int multiplication(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b,c,d,x,y;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    a=addition(x,y);
    b=subtraction(x,y);
    c=multiplication(x,y);
    d=division(x,y);
    printf("addition = %d\nsubtraction = %d\nmultiplication = %d\ndivision = %d\n",a,b,c,d);

}

