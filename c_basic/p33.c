#include <stdio.h>
int main()
{
int n,i,flag=0;
printf("Enter the possitive number:\n ",n);
scanf("%d",&n)
if(n==0||n==1)
flag=1;
for(i=2; i<=n; ++i){
if(n % i==0){
flag=1;
break;
}
}
if(flag=0)
printf("it is a prime numbers;\n");
else
printf("it is not a prime numbers:\n");
return 0;
}
