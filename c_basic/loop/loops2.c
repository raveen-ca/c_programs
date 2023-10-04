#include <stdio.h>
int main()
{
        int  a , b , side;
        printf("enter the number of rows and column\n",a);
        scanf("%d",&side);
        for(a=0; a < side; a++)
        {
        for(b=0; b < side; b++)
        {
        if(a==0 || a==side-1 || b==0 || b==side-1){
        printf(" * ");
        }
        else {
        printf("   ");
        }
        }
        printf("\n");
        }
   return 0;
}


