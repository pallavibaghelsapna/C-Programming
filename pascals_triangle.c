#include<stdio.h>
int main()
{

  int i,j,k,count=1, rows, num=1;

  printf("Enter the number of rows: \n");
  scanf("%d", &rows);


  for(i=0;i<rows;i++)
  {
    for(j=1;j<=rows-i;j++)
    {
      printf(" ");
    }

  for(k=0;k<=i;k++)
  {

    if (k==0||i==0)
    {
      num=1;
    }
    else
    {
      num = num *(i-k+1)/k;
    }

    printf(" %d", num);
  }

  printf("\n");

  }

  return 0;

}
