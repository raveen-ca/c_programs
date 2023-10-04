#include <stdio.h>
int main()
{
int r,v,s;
printf("enter the number of rows and colum: ");
scanf("%d",&s);
for(r=s; r>=1; r--) {
for(v=1; v<=r; v++) {
printf("X");
}
printf("\n");
}
return 0;
} 
