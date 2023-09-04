#include <stdio.h>
int main() {
int a,x,y;
printf("Enter Your Hours :",a);
scanf("%d",&a);

if(a>40)
{ x= (a-40)*18+a*12;
  printf("Your Pay is : %d\n",x);
}
else 
{
    x= a*12;
    printf("Your Pay is %d : \n",x);
}

if("x==300")
{
   y=x*0.15;
   printf("The amount of Tax Payed by you is :%d\n",y);
}
else if(x>=300 || x<=450)
{
    y=x*0.20;
    printf("The amount of Tax Payed By you is :%d\n",y);
}
else if(x>=450)
{
    y=x*0.25;
    printf("The amount of Tax Payed by you is :%d\n",y);
}
else
{
    printf("you are not eligible for tax payment");
}
return 0;
}