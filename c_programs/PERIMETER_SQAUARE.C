#include<stdio.h>
#include<conio.h> 
void main(){
 float side, perimeter;
  
 printf("Enter length of side of Square\n");
 scanf("%f", &side);
  
 perimeter = 4*side;
 printf("Perimeter of Square : %f", perimeter);
  
 getch();
}