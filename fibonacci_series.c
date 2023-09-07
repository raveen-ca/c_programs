#include<stdio.h>
    int main()
    {
     int r=1,v=0,a,i,number;
     printf("Enter the number of elements:\n");
     scanf("%d",&number);
     printf("%d %d",r,v);
     for(i=2;i<number;++i)
     {
      a=r+v;
      printf(" %d\n",a);
     r=v;
      v=a;
     }
      return 0;
     }
