#include <stdio.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int add(int a, int b)
{
  int sum=a+b;
  return sum;
}
void output( int a, int b, int sum)
{
  printf("The sum of %d and %d is %d",a,b,sum);
}
int main()
{
  int a,b,c;
  a=input();
  b=input();
  c=add(a,b);
  output(a,b,c);
  return 0;
}
