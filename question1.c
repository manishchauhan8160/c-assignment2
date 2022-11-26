#include<stdio.h>
int main()
{
int x;
printf("enter a number");
scanf("%d",&x);
x=x%10;
printf("the unit digit of the enter number is %d",x);
return 0;
}
