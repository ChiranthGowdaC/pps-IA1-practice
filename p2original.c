#include<stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",a);
}
int cmp(int a,int b,int c)
{
  int g;
  if(a>b && a>c)
  {
    g=a;
  }
  else if(b>c)
  {
    g=b;
  }
  else
  {
    g=c;
  }
  return g;
}
void output(int g)
{
  printf("The greatest number among three is:%d\n",g);
}
int main()
{
  int a,b,c,g;
  a=input();
  b=input();
  c=input();
  g=cmp(a,b,c);
  output(g);
  return 0;
}