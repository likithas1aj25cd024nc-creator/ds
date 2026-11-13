#include <stdio.h>

#define MAX_DEGREE 100

void displayPolynomial(int poly[], int degree)
{
    int first = 1;

    for (int i = degree; i >= 0; i--)
    {
       
        if (poly[i] == 0)
            continue;

      
        if (!first)
        {
            if (poly[i] > 0)
                printf(" + ");
            else
                printf(" - ");
        }
        else if (poly[i] < 0)
        {
            printf("-");
        }

       
        int absoluteValue = (poly[i] < 0) ? -poly[i] : poly[i];

    
        if (i == 0)
        {
            printf("%d", absoluteValue);
        }
        else if (i == 1)
        {
            printf("%dx", absoluteValue);
        }
        else
        {
            printf("%dx^%d", absoluteValue, i);
        }

        first = 0;
    }

   
    if (first)
        printf("0");

    printf("\n");
}

int main()
{
    int poly1[MAX_DEGREE + 1] = {0};
    int poly2[MAX_DEGREE + 1] = {0};
    int sumPoly[MAX_DEGREE + 1] = {0};

    int deg1, deg2, maxDegree;

  
    printf("Enter the highest degree of the 1st polynomial: ");
    scanf("%d", &deg1);

    for (int i = deg1; i >= 0; i--)
    {
        printf("Enter the coefficient for x^%d: ", i);
        scanf("%d", &poly1[i]);
    }

  
    printf("\nEnter the highest degree of the 2nd polynomial: ");
    scanf("%d", &deg2);

    for (int i = deg2; i >= 0; i--)
    {
        printf("Enter the coefficient for x^%d: ", i);
        scanf("%d", &poly2[i]);
    }

   
    maxDegree = (deg1 > deg2) ? deg1 : deg2;

    
    for (int i = 0; i <= maxDegree; i++)
    {
        sumPoly[i] = poly1[i] + poly2[i];
    }

  
    printf("\nFirst polynomial: ");
    displayPolynomial(poly1, deg1);

    printf("Second polynomial: ");
    displayPolynomial(poly2, deg2);

    printf("Sum: ");
    displayPolynomial(sumPoly, maxDegree);

    return 0;
}


