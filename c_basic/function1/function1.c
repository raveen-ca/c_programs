#include <stdio.h>
int add( int x , int y );
int main() 
{
        int a,b,c;
        printf("Enter two values is:");
        scanf("%d %d",&a,&b);
        c= add( a,b);
        printf("addition of a and b is %d",c);
   return 0;
}
        int add(int x,int y) 
{
   return (x+y);
}

