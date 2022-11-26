int main()
{
int x,y,temp=0;
printf("enter the three digit number");
scanf("%d",&x);
while(x)
{
y=x%10;
temp=temp+y;
x=x/10;
}
printf("sum of the digit is %d",temp);
}
