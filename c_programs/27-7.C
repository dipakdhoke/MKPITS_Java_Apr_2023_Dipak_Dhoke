#include<stdio.h>
#include<conio.h>
void main()
{
char i ,x ,z;
      for (i='E';i>='A';i--)
      {

	   for (z='E';z>=i;z--){
		printf(" ");

	   }
	      for (x='A';x<=i;x++){
			printf("%c",x);

	      }

	  printf("\n");
       }
     getch();
    }
