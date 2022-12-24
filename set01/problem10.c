#include <stdio.h>
#include <string.h>
void input(char *s1 ,char *s2)
{
  printf("enter the strings\n");
  scanf("%s", s1);
  printf("enter the strings\n");
  scanf("%s", s2);
}
void output(char *s1,char *s2)
{
  int i;
   int a=strlen(s1);
   int b=strlen(s2);
 /* printing first string*/
  for(i=0;(i<a)||(i<b);i++)
    {
      printf("%c\t""%c\n",s1[i],s2[i]);
      
    }
}
int main()
{
  char a[100];
  char b[100];
  input(a,b);
  output(a,b);
  return 0;
    
}
