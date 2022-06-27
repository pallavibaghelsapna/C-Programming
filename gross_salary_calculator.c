/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // int - 16 bit integer
    // long - 32 bit integer
    // long long - 64 bit integer
    
    // float - 32 bit
    // double - 64 bit
    // long double - 128 bit
    
    double bs,da,hs,gr;
    printf("enter the basic salary\n");
    scanf("%lf",&bs);
    
    da=bs*0.4;
    hs=bs*0.2;
    gr=bs+da+hs;
    printf("gross salary:%lf",gr);
    return 0;
}
