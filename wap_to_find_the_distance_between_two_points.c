#include<stdio.h>
#include<math.h>
int main()
{
  float x1,x2,y1,y2,distance;

  printf("enter the first point\n");
  scanf("%f%f",&x1,&y1);

  printf("enter the second point\n");
  scanf("%f%f",&x2,&y2);

  distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

  printf(" distance between two points:%f\n",distance);

  return 0;
}
