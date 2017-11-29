#include<stdio.h>

int main(void)
{
    double originalPrice =      0.0;
    double tax =                0.0;
    double discount =           0.0;
    double specialPrice =       0.0;

    printf("Enter the original price:");
    scanf("%lf", &originalPrice);

    printf("Enter the sales tax:");
    scanf("%lf", &tax);
                     
    printf("Enter the discount price:");
    scanf("%lf", &discount);

    double afterTax = originalPrice*(1.0 + tax/100.0);
    double theDiscount = originalPrice*(discount/100.0);
    specialPrice = afterTax - theDiscount;

    printf("\nOur rules:\n1.Tax is applied first.\n2.The discount is applied to original price.\n");

    printf("The original prices is: $%.2lf\n", originalPrice);
    printf("The prices after tax is: $%.2lf\n", afterTax);
    printf("The dicount prices is: $%.2lf\n", theDiscount);
    printf("The special prices is: $%.2lf\n", specialPrice);
    
    return 0;
}
