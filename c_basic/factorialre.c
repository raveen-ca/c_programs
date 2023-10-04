#include <stdio.h>
int fact(int);
int main () {
int r;
printf("enter a positive number to find a factorial:\n");
scanf("%d",&r);

printf("\n factorial of %d is %d\n",r,fact(r));
return 0;
}
int fact (int r)
{
if (r)
return (r*fact(r-1));
else 
return 1;
}

