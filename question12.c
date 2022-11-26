int main()
{
int x,temp;
printf("enter the number");
scanf("%d",&x);
temp=x%10;
x=x/10;
x=temp*100+x;
printf("modified no is %d",x);
}
