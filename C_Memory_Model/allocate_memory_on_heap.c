#include <stdlib.h>
#include <stdio.h>

int main() {
    float *rainfall = NULL;
    // Allocate space for a single floating point number and assign its location to the pointer rainfall.
    rainfall = (int*)malloc(sizeof(int));
    *rainfall = 42.5;
    return 0;
}