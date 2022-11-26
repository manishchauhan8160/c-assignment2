int main()
{
int x;
printf("enter a number");
scanf("%d",&x);
if(x&1)
printf("the lsb of %d is %d",x,1);
else
printf("the lsb of %d is %d",x,0);
}
