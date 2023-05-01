#include<stdio.h>
#include<conio.h>
void palindrome();
void main()
{
  palindrome();
}
void palindrome()    
{    
int n,r,sum=0,rev;    
printf("enter the number=");    
scanf("%d",&n);    
rev=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(rev==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
getch();  
  
}
