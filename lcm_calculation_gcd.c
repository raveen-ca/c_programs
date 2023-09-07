#include <stdio.h>

int main() {

    int r, v, i, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &r, &v);
    for (i = 1; i <= r && i <= v; ++i) {
      
        if (r % i == 0 && v % i == 0)
            gcd = i;
    }

    lcm = (r * v) / gcd;

    printf("The LCM of two numbers %d and %d is %d.\n", r, v, lcm);
    return 0;
}
