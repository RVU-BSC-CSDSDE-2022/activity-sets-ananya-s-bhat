#include <stdio.h>
#include <stdlib.h>
int input()
{
  int a;
  printf("enter the number");
  scanf("%d",&a);
  return a;
}
int check(int n)
{
  int r;
  if(((n%2)||(n%3)||(n%5)||(n%7))==1)
    r=0;

 return r; 
}
void output(int n,int p)
{
  if(p==0)
  {
   printf("%d is  a prime number ",n); 
  }
  else
   printf("%d not a prime number",n); 
}
int main()
{
  int a,b;
  a=input();
  b=check(a);
  output(a,b);
  return 0;

}