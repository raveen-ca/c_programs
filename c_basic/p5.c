#include <stdio.h>
int a=10;
void myfunc()
{
a = a/2;
}
int main ()
{
int a=12;
myfunc();
printf("%d",a);
return 0;
}
