#include <stdio.h>
#include<conio.h>
void arrayavg();
void main()
{
 arrayavg();
 getch();
}
void arrayavg()
	{
int  a[2], n, i ;
float  mean = 0, sum = 0 ;
printf(" Enter the Numbers of terms: ") ;
scanf("%d",& n) ;
printf("\n Enter the Numbers : \n") ;
for (  i = 1 ; i <= n ; i++)
{
scanf("%d ",& a[i]) ;
}
for (  i = 1 ; i <= n ; i++)
{
sum = sum + a[i] ;
mean = sum / n ;}
printf("\n Mean of entered Numbers are : %f ",mean) ;
getch();
}