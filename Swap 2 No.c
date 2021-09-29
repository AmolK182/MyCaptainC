#include<stdio.h>
 int main()
{
int a, b;
printf("Enter the Value of no.s to be swapped\n");
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("Values of Variables before swaping a=%d b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("Values of Variables after swapping a=%d b=%d",a,b);
return 0;
}
