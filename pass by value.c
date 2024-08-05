#include <stdio.h>


void passByValue(int x);

int main() {
    int a = 10;

    printf("Value before pass by value: a = %d\n", a);
    passByValue(a);
    printf("Value before pass by value: a = %d\n", a);

    return 0;
}

void passByValue(int x) {

    x = 20;
    printf("Inside pass by value: x = %d\n", x);
}
