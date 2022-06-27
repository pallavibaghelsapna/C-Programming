#include<stdio.h>


int main()
{

  int num;

  printf("enter the number\n");
  scanf("%d", &num);


  if (num%3==0)
  {
    printf("divisible by 3\n");
  }

  if(num%7==0)
  {
    printf("divisible by 7\n");
  }

  if(num%5==0)
  {
    printf("divisible by 5\n");
  }



  return 0;
}
