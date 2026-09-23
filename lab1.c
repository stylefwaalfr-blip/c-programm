#include <stdio.h>

int main()
{
    int x, y;
    printf("enter two integers: ");
    scanf("%d %d", &x, &y);

    int sum = x + y;
    int diff = x - y;
    int product = x * y;
    int quotient = x / y;
    int remainder = x % y;

    printf("sum: %d\n", sum);
    printf("difference: %d\n", diff);
    printf("product: %d\n", product);
    printf("quotient: %d\n", quotient);
    printf("remainder: %d\n", remainder);

    return 0;
}
