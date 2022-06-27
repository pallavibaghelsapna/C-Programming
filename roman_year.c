#include<stdio.h>

/*
2012
2012 m
1012 m
12 x
2 i
1 i
*/



void roman_year(int year)
{
  if (year>=1000)
  {
    printf("m");
    roman_year(year-1000);

  }
  else if(year>=500)
  {
    printf("d");
    roman_year(year-500);
  }
  else if(year>=100)
  {
    printf("c");
    roman_year(year-100);
  }
  else if(year>=50)
  {
    printf("l");
    roman_year(year-50);
  }
  else if(year>=10)
  {
    printf("x");
    roman_year(year-10);
  }
  else if(year>=5)
  {
    printf("v");
    roman_year(year-5);
  }
  else
  {
    if(year!=0){
      printf("i");
      roman_year(year-1);
    }

  }
}

int main()
{
  int y;

  printf("Enter the year \n");
  scanf("%d", &y);

  roman_year(y);

  return 0;
}
