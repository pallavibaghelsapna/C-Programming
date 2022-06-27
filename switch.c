#include<stdio.h>

int main()
{
  int a,b, option, value;
  printf("Calculator \n");
  printf("Enter two numbers \n");
  scanf("%d%d", &a, &b);
  printf(" 1. Add two numbers \n 2. Multiply two numbers \n 3. subtract second from first \n");
  printf("Choose one option to execute!\n");

  scanf("%d", &option);

  switch (option) {
    case 1:
      value = a+b;
      break;
    case 2:
      value = a*b;
      break;
    case 3:
      value = a-b;
      break;
    default:
      printf("nothing is selected!");

  }

  printf("value is %d \n", value);




  return 0;
}
