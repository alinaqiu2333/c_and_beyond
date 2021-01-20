#include <stdlib.h>
#include <stdio.h>
int main() {
    float *monthly_rainfall = NULL;
    // Allocate space on the heap for an array of 12 floats and assign it to the pointer monthly_rainfall.
    monthly_rainfall = malloc(sizeof(float)*12);
    for (int i = 0; i<12, i++){
        monthly_rainfall[i]= 0.66;
    }
    return 0;
}