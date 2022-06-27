#include<stdio.h>

 int main(int argc, char const *argv[])

 {
   int amount, num_of_notes;

   printf("enter the amount\n");
   scanf("%d",&amount);

   num_of_notes = 0;

   if(amount>=100)
   {
     num_of_notes=num_of_notes+amount/100;
     amount=amount%100;

  }

   if(amount>=50)
   {
     num_of_notes=num_of_notes+amount/50;
     amount=amount%50;

}
  if(amount>=10)
    {
      num_of_notes=num_of_notes+amount/10;
      amount=amount%10;

}
  if(amount>=5)
{  num_of_notes=num_of_notes+amount/5;
  amount=amount%5;

}
  if(amount>=2)
{
  num_of_notes=num_of_notes+amount/2;
  amount=amount%2;


}
if (amount>=1) {
  num_of_notes=num_of_notes+amount/1;
  amount=amount%1;



}
  printf("the number of notes will be:: %d\n",num_of_notes);




  return 0;
}
