#include <stdio.h>

int main(){
    //a)
    int a = 1;
    double b = 2.5;
    a = a + b;
    (double)a;
    printf("%d \n", a);
    printf("Sum of int and double: %ld byte \n", sizeof(a));
    //Pitfall: casting variable to smaller data type results in loss of data (decimal part)

    //b)
    int c = 2;
    char d = '3';
    c = c + d;
    printf("%d \n", c);
    printf("Sum of int and char: %ld byte \n", sizeof(c));

    //c)
    char str[50];
    int num = 42;
    printf("%s \n", str + num);
    printf("Sum of char array and int: %ld byte \n", sizeof(str));
    //Pitfall: Incorrect result
}
