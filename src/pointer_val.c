#include <stdio.h>

int main() {
    int *p, i;
    p = &i;

    printf("p = %p\n", p);
    printf("&i = %p\n", &i);

    // Outputs are like this
    // p = 0x7ffee4c3e934
    // &i = 0x7ffee4c3e934

    int *np = NULL;

    printf("np = %p\n", np);

    // np = 0x0


    return 0;
}
