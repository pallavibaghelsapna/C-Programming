#include <stdio.h>
#include <math.h>
int main()
{

  double root1,root2,a,b,c,discriminant;

  printf("enter the value of a, b and c\n");
  scanf("%lf%lf%lf",&a,&b,&c);

  discriminant=(b*b)-(4*a*c);



  if(discriminant>=0)
  {
    printf("the root is real\n");

    root1=(-b+sqrt(discriminant))/(2*a);

    printf("root1 : %lf\n",root1);

    root2=(-b-sqrt(discriminant))/(2*a);

    printf("root2 : %lf\n",root2);

  }
  else
  {
    printf("the root is imaginery\n");
  }

  printf("the value of root1 and root2 is %lf,%lf\n",root1,root2);

  return 0;
}
