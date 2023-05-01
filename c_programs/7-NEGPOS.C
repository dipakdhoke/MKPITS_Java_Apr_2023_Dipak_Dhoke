#include<stdio.h>
#include<conio.h>

void main()

{
 int n1, n2 ,n3,n4 ,n5 ,countnegative=0,cp=0;
 printf(" enter any 5 numbers \n ");
 scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
 if (n1<0){
	    countnegative++;
	   }
 else{
       cp++;
     }
  if (n2<0){
	    countnegative++;
	   }
 else{
       cp++;
     }
  if (n3<0){
	    countnegative++;
	   }
 else{
       cp++;
     }
    if (n4<0){
	    countnegative++;
	   }
 else{
       cp++;
     }
      if (n5<0){
	    countnegative++;
	   }
 else{
       cp++;
     }
       printf("positive numbers=%d\n negative numbers=%d",cp,countnegative);
       getch();
 }