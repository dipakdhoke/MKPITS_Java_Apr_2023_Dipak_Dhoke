#include<stdio.h>
#include<conio.h> 
void main(){
     int length, breadth, rect_perimeter;
     printf("Enter Length  : ");
     scanf("%d", &length);
     printf("Enter Breadth : ");
     scanf("%d", &breadth);
     rect_perimeter= 2*(length+breadth);
     printf("\nPerimeter of Rectangle = %d",rect_perimeter);
     getch();
}