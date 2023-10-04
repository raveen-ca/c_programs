#include<stdio.h>
int main()
{
  int i,j,a,b=1;
  printf("Enter the values:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf(" %d",b);
      b++;
    }
  }
  return 0;
}
