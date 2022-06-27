/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    
    int number,first,last,sum_of_first_and_last;
    printf("enter the number\n");
    scanf("%d",&number);
    
    last = number%10;
    first = number/1000;
    sum_of_first_and_last = last + first;
    
    printf("sum of first and last digits of number:%d",sum_of_first_and_last);
    
    
    
    
    
    
    
    
    
    
    return 0;
}
