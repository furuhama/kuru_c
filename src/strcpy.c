#include <stdio.h>
#include <string.h>

int main() {
    // strcpy is often used as string assignment.
    char str[10];
    strcpy(str, "COPY");
    printf("%s\n", str);

    return 0;
}
