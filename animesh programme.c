#include <stdio.h>

void main()
{
    int num1, int num2;
    printf("enter the 2 numbers");
    scanf("%d%d", &num1, &num2);
    int result;
    result = num1 + num2;
    printf("Addition: %d + %d = %d\n", num1, num2, result);
    result = num1 - num2;
    printf("Subtraction: %d - %d = %d\n", num1, num2, result);
    result = num1 * num2;
    printf("Multiplication: %d * %d = %d\n", num1, num2, result);
    float div = (num1+0.0) / num2;
    printf("Division: %d / %d = %f\n", num1, num2, div);
    result = num1 % num2;
    printf("Modulus: %d %% %d = %d\n", num1, num2, result);

}
