//program to print till 10 natural numbers
#include<stdio.h>
void main ()
{
     int n;
     printf("Enter the value of n\n");
     scanf("d",&n);
     for( int i=1;i<=10;)
     {
     printf("%d X %d =%d\n",n,i,n*i);
     i++;
     }
}
