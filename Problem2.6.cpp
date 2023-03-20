//main.c

#include "headerProblem2.6.h"
#include <stdio.h>

int main(){

    int n;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d \n", n, factorial(n));

    printf("Enter a float: ");
    scanf("%f", &f);
    printf("Factorial of rounded up %f is %d \n", f, factorial(f));

    return 0;
}

