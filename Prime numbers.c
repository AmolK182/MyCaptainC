#include <stdio.h>
int main() {
int n, i;
printf("Enter a positive integer: \n");
scanf("%d", &n);
for (i=2;i<= n/2;i++)
{
if (n%i==0) {
break;
}
}
if (n==1) {
printf("1 is neither prime nor composite.");
}
else if(n==2)
printf("2 is a prime number");
else
{
if(n%i!=0)
printf("%d is a prime number.", n);
else
printf("%d is not a prime number.", n);
}
return 0;
}
