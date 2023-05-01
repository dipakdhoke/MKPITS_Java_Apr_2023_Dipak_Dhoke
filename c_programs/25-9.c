#include<stdio.h>
#include<conio.h>
void main() {
  char j, i ;
  
  for(i='A';i<='E';i++ ){
     
       for(j='E';j>=i;j--){
       printf("%c",j);
   
  }
   
  printf("\n");
  }
    
   getch();    
}