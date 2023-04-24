#include<stdio.h>
#include<conio.h>

void main()

{

 int hours ,moneyperhour,employeeid;
 long int salary;
 printf(" Enter employee id \n");
 scanf("%d",&employeeid);
 printf(" Enter no of hours worked and per hour money");
 scanf("%d%d",&hours,&moneyperhour);
 salary=hours*moneyperhour;
 printf("salary of employee:%ld",salary);
 getch();

 }
