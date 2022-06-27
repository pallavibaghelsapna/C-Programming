#include<stdio.h>

/*

*
* *
* * *
* * * *
* * * * *

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*/

int main()
{

int rows, i, j;

printf("Enter the number of rows in pyramid\n");
scanf("%d", &rows);

for(i=0; i<rows; i++)
{

  for(j=0; j<=i; j++)
  {
    printf("* ");
  }

  printf("\n");
}

printf("\n");


for(i=0; i<rows; i++)
{

  for(j=0; j<=i; j++)
  {
    printf("%d ", j+1);
  }

  printf("\n");
}

printf("\n");

for(i=1; i<=rows; i++)
{

  for(j=1; j<=i; j++)
  {
    printf("%d ", j);
  }

  printf("\n");
}

printf("\n");

for(i=rows; i>0; i--)
{

  for(j=0; j<i; j++)
  {
    printf("%d ", j+1);
  }

  printf("\n");
}




return 0;

}
