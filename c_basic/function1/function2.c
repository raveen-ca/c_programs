#include <stdio.h>
void add(int x,int y) {
printf("Addition of two values :%d",x+y);
}
int main() {
int a,b;
printf("enter the two values");
scanf("%d %d",&a,&b);
add (a,b);
return 0;
}
