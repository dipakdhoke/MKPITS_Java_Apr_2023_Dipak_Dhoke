#include <stdio.h>
#include<conio.h>
void areaofcir();
void main()
{
 areaofcir();
 getch();    
}
void areaofcir()
	{
 float rad  ;
  float pi=3.142 ,res ;
  printf("enter the radius ");
 scanf("%f",&rad);
  res= pi* rad* rad ;
  printf(" result %f",res);
  getch();

}