//program to print table of a number
//Developed by Animesh Date- 18/09/2025
#include <stdio.h>

int main()
{
    int num;
    int i;
    printf("Enter a number to print its multiplication table;");
    scanf("%d", &num);
    printf("Multiplication table of %d:\n",num);
    for (i= 1; i<= 10; i++)
    {
        printf("%d X %d = %d\n", num, i, num * i);
    }
}
