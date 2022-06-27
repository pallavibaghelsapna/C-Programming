 #include<stdio.h>
int main()
{
  int rows, j, k,space = 1;

  printf("enter the value of rows\n");
  scanf("%d",&rows);
  space = rows - 1;
  for(k=1;k<=rows;k++)
  {
    for(j=1;j<=space;j++)
    {
      printf(" ");
    }
      space--;

    for(j=1;j<=2*k-1;j++)
    {
        printf("*");
    }
    printf("\n");
  }

  space = 1;
  for(k=1;k<=rows-1;k++)
  {
    for(j=1;j<=space;j++)
    {
      printf(" ");
    }
    space++;

    for(j=1;j<=2*(rows-k)-1;j++)
    {
      printf("*");

    }
    printf("\n");
  }

    return 0;

  }
