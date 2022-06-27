  #include<stdio.h>


 int main()
 {

   int count=0;


   while(count<=500)
   {

     int num = count, sum=0, rem;

     while(num!=0)
     {
       rem = num%10;
       sum = sum + rem*rem*rem;
       num = num/10;
     }

     if(count==sum)
     {
       printf("%d is an armstrong number\n", count);
     }


     count++;
   }


   return 0;
 }
