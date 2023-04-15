#include <stdio.h>

int main(void) {
    char c = 'A';
    int i = 42;
    float f = 3.14f;

    printf("Address of char variable: %p\n", (void *)&c);
    printf("Address of int variable: %p\n", (void *)&i);
    printf("Address of float variable: %p\n", (void *)&f);

    return 0;
}

