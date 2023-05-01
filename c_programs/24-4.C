#include<stdio.h>
#include<conio.h>

void main()
{
  int i=0,j,count=0;
  clrscr();
  for(i=0;i<=3;i++){
  for(j=1;j<=5;j++){
  if (count==0){
       printf("A");
      }
   if (count==1){
       printf("B");
      }
    if (count==2){
       printf("C");
      }
     if (count==3){
       printf("D");
      }
  }
    count++;
    printf("\n");


  }
   getch();
}