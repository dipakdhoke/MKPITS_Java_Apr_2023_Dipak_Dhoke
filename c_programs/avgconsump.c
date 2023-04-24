#include<stdio.h>
#include<conio.h> 
void main(){
    int x;
	float y ,avg;
	printf("Enter total distance in km: ");
	scanf("%d",&x);
	printf(" total fuel spent in liters: \n");
	scanf("%f", &y);
    avg=x/y ;
	printf("Average consumption km/lt: %f ",avg);
	
	getch();
}

