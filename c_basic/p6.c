#include<stdio.h>
long long findFact(int);
long long findPerm(int, int);
long long findComb(int, int);
int main()
{
    int comb, perm, n, r;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);
    perm = findPerm(n, r);
    comb = findComb(n, r);
    printf("\nPermutation = %d\n", perm);
    printf("\nCombination = %d\n", comb);
    return 0;
}
long long findFact(int num)
{
    int i=1;
    long long fact=1;
    while(i<=num)
    {
        fact = i*fact;
        i++;
    }
    return fact;
}
long long findPerm(int n, int r)
{
    int sub;
    long long numt, dent;
    sub = n-r;
    numt = findFact(n);
    dent = findFact(sub);
    return numt/dent;
}
long long findComb(int n, int r)
{
    int sub;
    long long numt, dent, temp;
    sub = n-r;
    numt = findFact(n);
    temp = findFact(sub);
    dent = temp*findFact(r);
    return numt/dent;
}

