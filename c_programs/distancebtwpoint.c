#include <stdio.h>
#include <math.h>
#include<conio.h>
void main() {
	float x1, y1, x2, y2,distance;
	printf("Input x1: ");
	scanf("%f", &x1);
	printf("Input y1: ");
	scanf("%f", &y1);
              printf("Input x2: ");
	scanf("%f", &x2);
	printf("Input y2: ");
	scanf("%f", &y2);
	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("Distance btw points: %f \n", sqrt(distance));
	
	getch();
}