#include <stdio.h>
int sum(int a, int b)
{
int c=a+b;
return c;
}
int main()
{
int a=10; int b=20;
int c= sum(a,b);
printf("The sum of %d + %d = %d\n",a,b,c);
return 0;
}
