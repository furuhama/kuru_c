#include <stdio.h>
#include <string.h>

int main() {
    int len, i;
    char str1[256], str2[] = "TURINGCOMPLETE";

    printf("Please input answer: ");

    scanf("%s", str1);

    printf("%s\n", str1);

    len = strlen(str2);

    for (i = 0; i < len + 1; i++) {
        if (str1[i] != str2[i]) break;
    }

    if (i == len + 1) {
        printf("You got answer.\n");
    } else {
        printf("Your input is wrong\n");
    }

    return 0;
}
