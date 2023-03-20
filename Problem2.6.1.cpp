//calculations.c

#include "headerProblem2.6.h"
#include <math.h>

int factorial(int n){
    int result = 1; //to avoid multiplication by 0
    int i;
    //as long as i is smaller than the input n, the loop continues to
    //multiply our "result" variable with the increasing value of i
    for(i = 1; i <= n; i++){
        result *= i;
    }
    return result; //in the end "result" holds the value of the factorial of our input
}

int factorial (float f){
    int rounded = ceil(f); //round up float to next higher int
    return factorial(rounded);
}
