#include <stdio.h>
#include <string.h>

int main() {
    // To concatenate two string literals, just write them sequencially.
    char str[] = "HOGE" "FUGA";
    printf("%s\n", str);

    // To concatenate two string variables, use `strcat` function.
    char str1[10] = "HOGE";
    char str2[] = "FUGA";
    strcat(str1, str2);
    printf("%s\n", str1);

    return 0;
}
