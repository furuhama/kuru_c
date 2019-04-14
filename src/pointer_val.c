#include <stdio.h>

int main() {
    int *p, i;
    p = &i;
    printf("p = %p\n", p);
    printf("&i = %p\n", &i);
    // Outputs are like this
    // p = 0x7ffee4c3e934
    // &i = 0x7ffee4c3e934

    // Init pointer variable with null
    int *np = NULL;
    printf("np = %p\n", np);
    // np = 0x0

    int *p1, i1;
    p1 = &i1;
    *p1 = 10;
    printf("*p1 = %d\n", *p1);
    printf("i1 = %d\n", i1);

    return 0;
}
