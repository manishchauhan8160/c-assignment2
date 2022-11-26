int main()
{
int x,y,temp;
printf("enter the first and second number");
scanf("%d%d",&x,&y);
printf("x=%d y=%d\n",x,y);
temp=x;
x=y;
y=temp;
printf("x=%d y=%d",x,y);
}
