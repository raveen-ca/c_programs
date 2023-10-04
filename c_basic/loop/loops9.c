#include <stdio.h>
int main()
{
int d, v, s, g;
printf("enter the number of rows: ");
scanf("%d\n",&d);
for(s=d; s>=1; s--) {
for(v=s; v<d; v++)
printf(" ");
for(g=1; g<=s; g++)
printf("* ");
printf("\n");
}
return 0;
}
