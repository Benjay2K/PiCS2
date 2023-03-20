#include <cstdio>

int main(){

    int sum = 0;

    //iterate through numbers from 1 to 999
    for(int i = 1; i < 1000; i++){
        //check if current i is a multiple of 3 or 5
        if(i % 3 == 0 || i % 5 == 0)
        sum += i; //if true, add current i to sum
    }
    printf("The sum of all multiples of 3 and/or 5 below 1000 is: %d \n", sum);

}