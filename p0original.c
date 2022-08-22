#include <stdio.h>
int input()
{
  int a;
  printf("Enter a number");
  scanf("%d",&a);
  return a;
}

int find_largest(int a, int b, int c)
{
  int d;
  if (a < b)
    d = b;
  else
    d = a;
  return 
}

int output(int a, int b, int c, int d)
{
  printf("largest of %d and %d is %d",a,b,c);
}

int main()
{
  int a, b, c;
  a=input();
  b=input();
  c=find_largest(a,b);
  output(a,b,c);
} 
