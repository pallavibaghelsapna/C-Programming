#include<stdio.h>



/*

 fact(4) = 4*fact(3)
        = 4*3*fact(2)
        = 4*3*2*fact(1)
        = 4*3*2*1

*/


int factorialLoop(int x)
{
  int factorial=1, i;

  if (x==1){

    return 1;
  }
  else
  {
    for(i=x; i>=1; i--)
    {
      factorial = factorial*i;
    }

    return factorial;
  }

}

int factorialRecursion(int x){

  int factorial;
  if (x==1){
    return 1;
  }
  else{

    factorial = x*factorialRecursion(x-1);
  }

  return factorial;

}

// a to the power b

int power(int a, int b)
{

  int total =1,i;

  for(i=0; i<b; i++){
    total = total*a;
  }

  return total;
}

int main()
{

  int i,a,b;

  printf("Enter the number\n");
  scanf("%d%d", &a, &b);

  //printf("the factorial of the number %d is %d \n", i, factorialRecursion(i));
  printf("%d^%d = %d \n", a, b, power(a,b));




  return 0;
}
