#include<stdio.h>
#include<time.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    time_t t;
    time(&t);

    printf("\n date and time: %s", ctime(&t));

   printf("\n\n\t\t\t\n\n\n");
    return 0;
}
