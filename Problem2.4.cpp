#include <stdio.h>

int main(){
    int arr[10];
    double sum = 0.0;
    double mean;

    printf("Enter 10 integers: \n");

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);

    }

    for(int i = 0; i < 10; i++){
        sum += arr[i];
    }

    mean = sum / 10.0;

    printf("The mean of the numbers is: %lf \n", mean);

    return 0;
}
