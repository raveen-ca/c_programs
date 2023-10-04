#include <stdio.h>
int main() {
 int i,j;
 for(i=1; i<=10; i=i+1) {
 for(j=i; j<=i; j=j+1){
 printf("%d ",i);
 }
 printf("\n");
}
 return 0;
}
