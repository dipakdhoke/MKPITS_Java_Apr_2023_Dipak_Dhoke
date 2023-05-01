#include <stdio.h>
#include<conio.h>
void tempftoc();
void main()
{
 tempftoc();
 getch();    
}
void tempftoc()
	{
 int F;
     float cel;
     printf("Enter Temperature in Fahrenheit : ");
     scanf("%d",&F);
     cel=(F-32)/1.8;
     printf("\nTemperature in Celsius = %f", cel);
     getch();

}