#include<stdio.h>
int input()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}
int cmp(int a,int b,int c)
{
  
  if((a>b)&&(a>c))
  {
    return a;
  }
  else if((b>c)&&(b>a))
  {
    return b;
  }
  else
  {
    return c;}
}
void output(int g)
{
  printf("The greatest number among three is %d\n",g);
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