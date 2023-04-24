#include<stdio.h>
#include<conio.h>

void main();
{
  float W1,W2 ,P1,P2,Average;
  printf(" Enter the weights of two items");
  scanf("%f%f"&W1,&W2);
  printf("Enter the no purchases of 1 item and 2 item ");
  scanf("%f%f",&P1,&P2);
  Average=(W1+W2)/(P1+P2);
  printf("average =%f "Average);
  getch();
}