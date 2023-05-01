#include <stdio.h>.
#include<conio.h>
#include <math.h>
void areaoftri();
void main()
{
 areaoftri();
 getch();    
}
void areaoftri()
	{
double a, b, c, s, area;

  printf("Enter sides of a triangle\n");
  scanf("%lf%lf%lf", &a, &b, &c);

  s = (a+b+c)/2; 

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("Area of the triangle = %.2lf\n", area);

  getch();

}