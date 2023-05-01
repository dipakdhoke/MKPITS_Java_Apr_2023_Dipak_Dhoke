#include<stdio.h>
#include<conio.h>

void main()

{
 int n1, n2 ,n3,n4 ,n5 ,countnegative=0,cp=0;
 float avg,sum=0;
 printf(" enter any 5 numbers \n ");
 scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
 if (n1<0){
	    countnegative++;
	   }
 else{
       cp++;
       sum=sum+n1;
     }
  if (n2<0){
	    countnegative++;
	   }
 else{
       cp++;
       sum=sum+n2;
     }
  if (n3<0){
	    countnegative++;
	   }
 else{
       cp++;
       sum=sum+n3;
     }
    if (n4<0){
	    countnegative++;
	   }
 else{
       cp++;
       sum=sum+n4;
     }
      if (n5<0){
	    countnegative++;
	   }
 else{
       cp++;
       sum=sum+n5;
     }
     avg=sum/cp;
       printf("positive numbers=%d\n average of positive numbers=%f",cp,avg);
       getch();
 }