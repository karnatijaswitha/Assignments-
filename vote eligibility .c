#include<stdio.h>
void main()
{ 
int age;
printf("Enter age of the person:");
scanf("%d",&age);
if(age>=18)
printf("Eligible to vote");
else
printf("Not eligible to vote");
}