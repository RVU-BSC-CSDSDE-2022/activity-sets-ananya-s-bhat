#include <stdio.h>
struct triangle{
float base,height,area;
};
typedef struct triangle tri;
int input()
{
  int a;
  printf("enter the number of triangles for which area should be calculated");
  scanf("%d",&a);
  return a;
}
tri input_triangle()
{
  tri a;
  printf("enter the base");
  scanf("%f",&a.base);
  printf("enter the height");
  scanf("%f",&a.height);
  return a;
}
void input_n_tri(int n,tri t[n])
{
  for (int i=0;i<n;i++)
    {
      t[i]=input_triangle();
    }
}
void find_area(tri *t)
{
  t->area=t->base*(t->height)*0.5;
}
void find_areas(int n,tri t[n])
{
  for (int i=0;i<n;i++)
    {
      find_area(&t[i]);
    }
}
tri find_smallest(int n,tri t[n])
{
  tri smallest;
  smallest.area=t[0].area;
  smallest.height=t[0].height;
  smallest.base=t[0].base;
  
  int i;
  for (i=1;i<n;i++)
    {
      if(t[i].area < smallest.area)
      {
        smallest.area=t[i].area;
        smallest.height=t[i].height;
        smallest.base=t[i].base;  
      }
      
        
      
      
    }
 
  return smallest;
}
void output (tri smallest)
{
  printf(" the triangle of height%f and base %f is the smallest, and its area is %f",smallest.height,smallest.base,smallest.area);
}
int main()
{
  int a;
  a=input();
  tri b[a];
  input_n_tri(a,b);
  find_areas(a,b);
  tri c={0,0,0};
  c=find_smallest(a,b);
  output(c);
  return 0;
}