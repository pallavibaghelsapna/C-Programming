/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int reverse(int number)
{
  int total = 0, digit;
  while(number>0)
  {
      digit = number%10;
      total =total*10 + digit;
      number = number/10;
  }

  return total;
}


int sum(int number)
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


int main()
{
  int number;
  printf("enter the value of number\n");
  scanf("%d",&number);

  printf("reverse of the number is %d\n",reverse(number));
  printf("sum of the number is %d\n",sum(number));
  return 0;
}
