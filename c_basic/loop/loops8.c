#include <stdio.h>
int main()
{
int r , v , s;
printf("enter the number of rows: ");
scanf("%d",&s);
for(r = 0; r < s; r++) {
for(v = 0; v < s; v++) {
if(v < s-r-1) {
printf(" ");
}
else {
printf("*");
}
}
printf("\n");
}
return 0;
}
