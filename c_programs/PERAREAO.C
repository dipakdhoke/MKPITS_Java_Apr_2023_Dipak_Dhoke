#include<stdio.h>
#include<conio.h>
void main()
{
int width;
int height;

int area;
int perimeter;

 height = 7;
 width = 5;

 perimeter = 2*(height + width);
 printf("Perimeter of the rectangle = %d inches\n", perimeter);

 area = height * width;
 printf("Area of the rectangle = %d square inches\n", area);
 getch();
}