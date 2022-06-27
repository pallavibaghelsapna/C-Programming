#include<stdio.h>

int main()

{

  int a,b,c;

  printf("enter the sides of traingle\n");
  scanf("%d%d%d",&a,&b,&c);

  if(a==b && b==c && c==a)
  {

    printf("It is an equilateral triangle\n");

  }
  else if(a==b||b==c||c==a)
  {

    printf("It is an isosceles triangle\n");

  }
  else if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a)
  {
    printf("It is scalene but also right-angle traingle\n");
  }
  else
  {

    printf("It is a scalene triangle\n");

  }


  return 0;
}
