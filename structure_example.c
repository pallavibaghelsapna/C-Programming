#include<stdio.h>

struct book
{
  int price;
  int release_date;
  int num_of_pages;
  //char name[10];
};


int main()
{
  struct book one, two;
  struct book books[5];
  int i;

  struct book physics = {210, 2016, 120};

  printf("%d, %d, %d\n", physics.price, physics.release_date, physics.num_of_pages );


  // for(i=0; i<5; i++)
  // {
  //   printf("Enter the details of Book %d\n", i+1);
  //   printf("Enter price: \n");
  //   scanf("%d", &books[i].price);
  //   printf("Enter release date: \n");
  //   scanf("%d", &books[i].release_date);
  //   printf("Enter number of pages: \n");
  //   scanf("%d", &books[i].num_of_pages);
  // }
  //
  // for(i=0; i<5; i++)
  // {
  //   printf("the details of Book %d are:\n", i+1);
  //   printf("Price: %d\n", books[i].price);
  //   printf("Release date: %d\n", books[i].release_date);
  //   printf("Number of pages: %d\n", books[i].num_of_pages);
  // }



  // one.price = 120;
  // one.release_date = 2012;
  // one.num_of_pages = 100;
  //one.name = "Stories";

  // two.price = 2000;
  // two.release_date = 1995;
  // two.num_of_pages = 2567;
  //two.name = "Physics";


  // printf("Book One : \n");
  // printf(" Price: %d\n Release date: %d\n Number of Pages: %d\n", one.price, one.release_date, one.num_of_pages);
  //
  // printf("Book Two : \n");
  // printf(" Price: %d\n Release date: %d\n Number of Pages: %d\n", two.price, two.release_date, two.num_of_pages);


  return 0;
}
