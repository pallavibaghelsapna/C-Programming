#include<stdio.h>
int main()
{   int number,number_copy, reverse_number,digit;
    printf("enter the value of number\n");
    scanf("%d", &number);

    number_copy = number;
    reverse_number = 0;

    while(number!=0)
    {
      digit = number%10;
      reverse_number = reverse_number*10 + digit;
      number = number/10;
    }

    printf("reverse number is %d\n", reverse_number);



    if (number_copy == reverse_number)
    {
      printf("It's a palindrome!");
    }
    else {
      printf("It's not a palindrome!");
    }

    return 0;

}
