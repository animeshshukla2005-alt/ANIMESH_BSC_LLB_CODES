//program to find maximum of two numbers using conditional operators
//developed by Animesh Shukla Date: 11/10/2025
#include <stdio.h>

void main()
{
   int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using the conditional operator to find the maximum
    max = (num1 > num2) ? num1 : num2;

    printf("The maximum between %d and %d is %d\n", num1, num2, max);

     return 0;
}
