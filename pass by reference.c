#include <stdio.h>


void passByReference(int *x);

int main() {
    int a = 10;

    printf("Value before pass by reference: b = %d\n", a);
    passByReference(&a);
    printf("value after pass by reference: b = %d\n", a);

    return 0;
}

void passByReference(int *x) {

    *x = 20;
    printf("Inside pass by reference: *x = %d\n", *x);
}
