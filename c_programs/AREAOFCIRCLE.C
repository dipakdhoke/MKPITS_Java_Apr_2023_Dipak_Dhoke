#include<stdio.h>
#include<conio.h>

void main()

{
  int rad  ;
  float pi=3.142 ,res ;
  clrscr();
  printf("enter the radius ");
 scanf("%d",&rad);
  res= pi* rad* rad ;
  printf(" result %f",res);
  getch();


}