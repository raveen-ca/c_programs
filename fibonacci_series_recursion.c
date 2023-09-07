#include<stdio.h>
void printFibonacci(int n){
    static int r=0,a=1,v;
    if(n>0){
         v = r + a;
         r = a;
         a = v;
         printf("%d ",v); 
         printFibonacci(n-1);
    }
}
int main(){
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    printf("%d %d ",0,1);
    printFibonacci(n-2);
  return 0;
 }
