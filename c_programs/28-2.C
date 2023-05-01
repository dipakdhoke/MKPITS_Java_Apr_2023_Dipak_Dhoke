#include <stdio.h>
#include<conio.h>
void maxoftwo();
void main()
{
 maxoftwo();
 getch();    
}
void maxoftwo(){
	int num1, num2 ,max;

    printf("Enter thwo numbers: ");
    scanf("%d%d", &num1, &num2);

    if(num1==num2){
		max=num1;
	}
    if(num1 > num2)
    {
	max=num1;

    }
	else{
		max=num2;
	}


    printf("Maximum among two numbers = %d", max);

    getch();

}