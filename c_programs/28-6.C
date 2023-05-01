#include<stdio.h>
#include<conio.h>
void squareOfNumber();
void main()
{
  squareOfNumber();
}
void squareOfNumber()
{
     float number, square;
    printf("Please Enter any integer Value : ");
    scanf("%f", &number);
    square = number * number;
    printf("square of a given number %.2f is  =  %.2f", number, square);
    getch();
    
}