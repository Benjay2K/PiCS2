#include <stdio.h>
#include <math.h>
int main(){

    int i;
    double radius, volume, surface_area;

    // print header
    printf("Radius\tVolume\t\tSurface area\n");

    // iterate through radii 1 to 10
    for (i = 1; i <= 10; i++) {
        radius = i;
        volume = 4.0 / 3.0 * M_PI * pow(radius, 3);
        surface_area = 4.0 * M_PI * pow(radius, 2);

        // print values with 2 digits after decimal point
        printf("%d\t%.2f\t\t%.2f\n", i, volume, surface_area);
    }

    return 0;
}
