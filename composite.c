

#include <stdio.h>

int isComposite(int num) {
 int i;

  for (i = 2; i <= num / 2; i++) {
  if (num % i == 0) {
   return 1;
  }
 }

 return 0; 
}

int main() {
 int number;

 printf("Enter a positive integer: ");
 scanf("%d", &number);

 if (isComposite(number)) {
  printf("%d is a composite number.\n", number);
 } else {
  printf("%d is not a composite number.\n", number);
 }

 return 0;
}
