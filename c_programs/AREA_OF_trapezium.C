#include<stdio.h>
#include<conio.h>
void main(){
  float b1, b2, height, Area;

  printf("\n Please Enter two bases and height of the trapezium \n");
  scanf("%f %f %f", &b1, &b2, &height);

  Area = 0.5 * (b1 + b2) * height;


  printf(" Area of a trapezium =%f",Area);


  getch();
}
