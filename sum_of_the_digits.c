#include<stdio.h>

/*

123
%10 3
/10 12
%10 2
/10 1
%10 1

*/



int non_recurisve(int number)
{
  int total = 0, digit;
  while(number>0)
  {
      digit = number%10;
      total =total + digit;
      number = number/10;
  }

  return total;
}

int recursive(int number)
{
  if (number ==0)
  {
    return 0;
  }
  else{
      return (number%10 + recursive(number/10));
  }

}

/*
rec(123) = 123%10 + rec(12)
          =  123%10 + 12%10 + rec(1)
          = ____ + ____ + 1%10 + rec(0)
*/


int main()
{
  int number;

  printf("Enter the number\n");
  scanf("%d", &number);

  printf("non recursive sum is : %d\n", non_recurisve(number));
  printf("recursive sum is : %d\n", recursive(number));

  return 0;
}
