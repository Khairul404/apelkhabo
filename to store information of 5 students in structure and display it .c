#include<stdio.h>

int main()
{
 int a,b,c,*pa, *pb, *pc;
 printf("Enter three numbers:\n");
 scanf("%d%d%d", &a,&b,&c);
 pa= &a;
 pb= &b;
 pc= &c;
 if(*pa > *pb && *pa > *pc)
 {
  printf("Largest number is: %d", *pa);
 }
 else if(*pb > *pa && *pb > *pc)
 {
  printf("Largest number is : %d", *pb);
 }
 else
 {
  printf("Largest number is : %d", *pc);
 }
 return 0;
}
