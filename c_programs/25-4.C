#include<stdio.h>
#include<conio.h>
void main() {
  int i, j,c=1 ;
  for(i=5;i>=1;i-- ){

       if(i==5){
        printf("1");
       }
     
       for(j=1;j<=i;j++){
       if(c==5){
        printf("1");
        c++;
        break;
       }
       printf("%d",c);
   
  }
  c++;
   
  printf("\n");
  }
  getch();
    
}