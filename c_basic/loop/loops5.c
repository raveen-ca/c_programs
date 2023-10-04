#include <stdio.h>
int main() {
int love=7;
int a=1;
for(int r=0; r<love; r++) {
for(int v=0; v<=r; v++) {
printf("*",a++);
}
printf("\n");
}
return 0;
}
