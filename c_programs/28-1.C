#include <stdio.h>
#include<conio.h>
void addoftwo();
void main()
{
 addoftwo();
 getch();    
}
void addoftwo(){
	int num1,num2,res;
  printf(" enter two no ");
  scanf("%d%d",&num1,&num2);
  res =num1 + num2 ;
  printf(" result %d ",res);
  getch();

}