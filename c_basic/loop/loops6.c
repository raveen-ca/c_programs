#include <stdio.h>
int main() {
int love = 7;
for(int r = 0; r < love; r++) {
for(int v = 0; v < 2 * r; v++) {
printf(" ");
}
for(int s = 0; s < love -r; s++) {
printf("*");
}
printf("%d\n");
}
return 0;
}
