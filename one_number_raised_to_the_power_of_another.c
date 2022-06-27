#include<stdio.h>
int main()
{
  int A,B,C,D;

  printf("enter the two numbers\n");
  scanf("%d%d",&A,&B);
  C=1;
  D=B;


  while(B!=0)
  {
      C=C*A;
      B=B-1;

  }

  printf("%d to the power of %d is %d\n",A,D,C);

  return 0;
}
