#include <stdio.h>
int main () {
        int r,v;
        unsigned long long fact=1;
        printf("entre the integer:");
        scanf("%d",&r);
        if (r<0)
         printf("error! factoial of an negetive number dosn't exist.");
         else {
          for (v=1; v<=r; v++)
{
fact*=v;
}
printf("factorial of %d=%llu\n",r,fact);
}
return 0;
}
