/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("enter the value in 5 digit\n");
    scanf("%d",&a);
    b=a%10;
    c=a/10%10;
    d=a/100%10; 
    e=a/1000%10;
    f=a/10000%10;
    g=b+c+d+e+f;
    printf("sum of the digits:%d",g);
    
    
    
    
    
    
    
    
}
