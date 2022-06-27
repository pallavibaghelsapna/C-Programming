#include<stdio.h>
int main()
{
  int i, n,count=0,num;
  printf("enter the value of n\n");
  scanf("%d",&n);

  for(i=0;i<=n;i++)
  {
    num=i;

    while(num>0)
    {
      if(num%10==2)
      {
        count++;
      }

      num = num/10;
    }

  }

  printf("the value of count is %d\n",count);
  return 0;
}
