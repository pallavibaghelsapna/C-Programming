#include<stdio.h>


int main()  
{
 int a,b,c;
    
 printf("enter the value of a and b\n");     
 scanf("%d%d",&a,&b);   
 printf("value of a is %d and value of b is %d\n",a,b);   
 c=a;
 a=b;
 b=c;
 printf("new value of a is%d and new value of b is %d\n",a,b);
    
    
    

    return 0;
}