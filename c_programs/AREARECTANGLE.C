#include<stdio.h>
#include<conio.h> 
void main(){
     int length, breadth, rect_area;
     printf("Enter Length  : ");
     scanf("%d",&length);
     printf("Enter Breadth : ");
     scanf("%d",&breadth);
     rect_area = length * breadth;
     printf("\nArea of Rectangle = %d",rect_area);
     getch();
}