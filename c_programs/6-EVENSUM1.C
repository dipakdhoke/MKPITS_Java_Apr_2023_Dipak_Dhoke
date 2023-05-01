#include<stdio.h>
#include<conio.h>

void main()

{
  int count=0,i,sum=0;
  for(i=0;i<50;i++)
  {

    if(count%2==0){
    printf("%d\n",count);
    sum=sum+count;
  }
   count++;

     }
     getch();
}
