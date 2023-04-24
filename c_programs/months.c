#include <stdio.h>
#include<conio.h>
int main() {
	int ndays, y, m, d;	
	
	printf("Input no. of days: ");
	
	scanf("%d", &ndays);
	
	y =  ndays/365;
	
	ndays = ndays-(365*y);
		  
	m = ndays/30;
	
	d = ndays-(m*30);
	
	printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
	getch();
}