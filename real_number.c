#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
    //declarations
    float a;
    float b;
    float c;
    float root1, root2;
    int count;
    float discriminate;

    //Initialization
    count = 0;

    //starting propmts
    printf("\nHello, this program will compute the real roots");
    printf("of a quadratic equation.\n");
    printf("In terms of a(x)^2 + b(x) + c = 0\n");
    printf("\nPlease enter in the \"a\" value: ");
    scanf("%f", &a);
    printf("Please enter in the \"b\" value: ");
    scanf("%f", &b);
    printf("Please enter in the \"c\" value: ");
    scanf("%f", &c);


    while (count == 0)
    {
        if (a == 0)
        {
            if (a == 0 && b == 0)
            {
                printf("There is no soultion...\n");
                break;
            }
            else
            {
                root1 = (-c / b);
                printf("\nNOTE: Input is not quadratic but uesing \"(-c / b)\" ");
                printf("the root is %.3f\n", root1);
                break;
            }   
        }
        else
        {
            discriminate = b*b - 4 * a*c;
            if (discriminate < 0)
            {
                root1 = (-b + sqrt(discriminate)) / (2 * a);
                root2 = (-b - sqrt(discriminate)) / (2 * a);
                printf("\nNOTE: Roots are not real.\n");
                printf("The roots are, %.3f, and %.3f\n", root1, root2);
                break;
            }
            else
            {
                root1 = (-b + sqrt(discriminate)) / (2 * a);
                root2 = (-b - sqrt(discriminate)) / (2 * a);
                if (root1 == root2)
                {
                    printf("The root is, %.3f.\n", root1);
                    break;
                }
                else
                {
                    printf("The roots are, %.3f, and %.3f.\n", root1, root2);
                    break;
                }

            }
        }
    }
    printf("Goodbye.\n");
    return 0;
}
