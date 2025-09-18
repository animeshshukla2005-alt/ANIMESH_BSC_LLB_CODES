//program to print name n no of times
//Developed by Animesh Date- 18/09/2025
#include <stdio.h>

int main()
{
    char name[50];
    int n, i;

    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter the number of times to repeat");
    scanf("%d" , &n);

    for (i = 0; i < n; i++)
    {
    printf("%s\n", name);
    }
}
