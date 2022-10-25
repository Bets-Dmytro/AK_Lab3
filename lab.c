#include <stdio.h>
#include "Calculator.h"

int main()
{
    char func;
    int x, y;

    printf("Choose function ");
    scanf("%c", &func);

    printf("Input variables ");
    scanf("%d%d", &x, &y);

    if (func == '+')
        printf("\nResult is %d \n", Add(x, y));
    else if (func == '-')
        printf("\nResult is %d \n", Substract(x, y));
    else
        printf("\nResult is %d \n", Multiply(x, y));

    return 0;
}
