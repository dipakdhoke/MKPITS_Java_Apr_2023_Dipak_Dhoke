#include<stdio.h>
#include<conio.h>

void main()
{
  int i=0,j,count=0;
  clrscr();
  for(i=0;i<=2;i++){
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
       for(j=1;j<=4;j++){
       if(count==0){

       printf("a");
       }
       if (count==1){
       printf("b");
       }
       if (count==2){
       printf("c");
       }
       if (count==3){
       printf("d");
       }

     }
       count++;
       printf("\n");
   }
     getch();

   }