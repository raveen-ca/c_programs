#include <stdio.h>
int main(){
int r,v,s;
printf("enter the number of rows: ");
scanf("%d",&s);
for(r=1; r<=s; r++) {
for(v=r; v>=s; v--) {
printf("X");
}
printf("\n");
}
return 0;
}
