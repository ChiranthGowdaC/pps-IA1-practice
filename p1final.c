#include<stdio.h>
void input(int *a,int *b)
{
  printf("ente a numbers\n");
  scanf("%d",a);
  printf("enter the another number");
  scanf("%d",b);
}
void add(int a,int b,int*sum)
{
  *sum=a+b;
}
void output(int a,int b,int sum)
{
  printf("Sum of %d and %d is %d\n",a,b,sum);
}
void main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b,&sum);
  output(a,b,sum);
}