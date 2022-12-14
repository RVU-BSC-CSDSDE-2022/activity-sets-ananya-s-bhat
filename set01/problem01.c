#include <stdio.h>
void change(int *x, int  *y);

int main()
{
   int x=0,y=0;
   change(&x, &y);
   printf("x is %d and y is %d", x,y);
   return 0;
}
void change(int *x, int *y)
{
    *x=7;
    *y=9;