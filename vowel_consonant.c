#include<stdio.h>
int main()
{
  char i;
  

  printf("enter the character\n");
  scanf("%c",&i);

  if(i=='a'||i=='A'||i=='e'||i=='E'||i=='i'||i=='I'||i=='o'||i=='O'||i=='u'||i=='U')
  {
    printf("%c is vowel\n",i);

  }
  else{
    printf("%c is consonant\n",i);

  }

  return 0;
}
