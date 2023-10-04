#include <stdio.h>
int main()
{
int n,i,r=0;
printf("Enter the possitive integer:\n ");
scanf("%d",&n);
if( n==0 || n==1 )
r=1;
for(i = 2; i <= n / 2; ++i){
if( n % i == 0){
r=1;
break;
}
}
if ( r = 1 )
printf("it is a prime numbers:\n",n);
else
printf("it is not a prime numbers:\n",n);
return 0;
}

