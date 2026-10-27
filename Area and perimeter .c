#include<stdio.h>
void main()
{
float l,b,area,perimeter;
printf("Enter l,b values:");
scanf("%f%f",&l,&b);
area = l*b;
perimeter= 2*(l+b);
printf("Area of rectangle =%f",area);
printf("\nPerimeter of rectangle = %f",perimeter);
}