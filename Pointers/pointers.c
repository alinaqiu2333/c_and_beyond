// pointer and how to assign its value
#include <stdio.h>
int main() {
    int i = 5;
    int *pt = &i;
    printf("%d\n", *i);
    return 0;

// here are three lines that basically means the same
int *p = foo;
int *p; p = foo;
int * p = foo;
int* p = foo;

// add (the number pointed by)added_value to variable secret
int secret;
int *added_value;
int *secret_pt = &secret;
*secret_pt += *added_value 



