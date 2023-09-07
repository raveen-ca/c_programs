#include<stdio.h> 
 #include<conio.h> 
 #include<math.h> 
 #define NMAX 1000000 
 int main() 
 { 
   unsigned long num,den; 
   double val,error,delta; 
   int nsig; 
   clrscr(); 
   val=acos(-1.0); /* val =pi for our example*/ 
   nsig=6; 
   delta=1.0/pow(10.0,nsig); 
   printf("\n Finding rational approx. to %17.15lf",val); 
   printf("\n correct to %d significant places\n",nsig); 
     for(num=1;num<=NMAX;num++) 
      { 
                 den= num/val+0.5; 
                 error=fabs(1.0-num/(den*val)); 
              if(error<=delta) 
              { 
                  printf("\n %ld/%ld = %17.15lf for %17.15lf",num,den,(double)num/den,val); 
                    nsig=-log10(error); 
                    printf("\n Correct to %d significant digits",nsig); 
                    break; 
              } 
      } 
                           getch(); 
                           return 0; 
 }
