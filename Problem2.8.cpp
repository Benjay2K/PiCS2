#include <cstdio>

int main(){
    int sum = 0;
    int a = 1, b = 2, c;
    while(b <= 4000000){
        if(b % 2 == 0){
            sum += b;
        }
        c = a + b;
        a = b;
        b = c;
    }
    printf("The sum of even-valued terms in the Fibonacci-Sequence below 4 million is: %d \n", sum);
}