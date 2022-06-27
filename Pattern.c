#include<stdio.h>
int main()
{

  int i,j,k,count=1, rows;

  printf("Enter the number of rows: \n");
  scanf("%d", &rows);


  for(i=1;i<=rows;i++)
  {
    for(j=1;j<=rows-i;j++)
    {
      printf(" ");
    }

  for(k=1;k<=i;k++)
  {
    printf(" %d",count);
    count++;
  }

  printf("\n");

  }

  return 0;

}
