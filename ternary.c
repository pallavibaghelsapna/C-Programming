#include<stdio.h>

int main()
{

  /*

  condition ? true : false

  */

  int a,b, min;
  printf("enter a and b\n");
  scanf("%d%d", &a, &b);

  min = a<b ? a:b;

  printf("%d is minimum\n", min);


  return 0;
}
