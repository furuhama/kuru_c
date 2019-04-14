#include <stdio.h>

int main() {
    char str[256];

    scanf("%s", str);

    // `str` has the same mean of `&str[0]`
    printf("%s\n", str);
    printf("%s\n", &str[0]);

    return 0;
}
