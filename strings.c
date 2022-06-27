#include<stdio.h>


int main()
{
  char name[] = "Pallavi";
  int number= 12345;

  int i=0;
  // We know that in C every String ends with null '\0' character
  int len=0;
  int num_len=0;
  while(name[i]!='\0')
  {
    printf("%c", name[i]);
    i++;
    len++;
  }

  while(number!=0)
  {
    num_len++;
    number = number/10;

  }


  printf("\n The length of the word is: %d", len);
  printf("\n The length of the number is: %d", num_len);
  return 0;
}
