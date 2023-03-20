#include <stdio.h>

int main(){
    printf("Float: %ld byte \n", sizeof(float));
    printf("Long double: %ld byte \n", sizeof(long double));
    printf("Int*: %ld byte \n", sizeof(int*));
    printf("Float*: %ld byte \n", sizeof(float*));
    printf("Long[30]: %ld byte \n", sizeof(long[30]));
    printf("String: %ld byte \n", sizeof("string"));
    printf("7: %ld byte \n", sizeof(7));
    printf("3.4: %ld byte \n", sizeof(4+0.8));
}



