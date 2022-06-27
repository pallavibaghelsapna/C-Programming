#include<stdio.h>


int main()
{

  int arr[10], num_row=3, num_col=2;
  int marks[num_row][num_col], i, j;

  /*

  00  01
  10  11
  20  21


  */

  printf("Enter the values of 3x2 matrix\n");
  for(i=0; i<num_row; i++)
  {
    for(j=0; j<num_col; j++)
    {
      scanf("%d", &marks[i][j]);
    }
  }

  printf("The Matrix is: \n");

  for(i=0; i<num_row; i++)
  {
    for(j=0; j<num_col; j++)
    {
      printf(" %d ", marks[i][j]);
    }
    printf("\n");
  }



  return 0;
}
