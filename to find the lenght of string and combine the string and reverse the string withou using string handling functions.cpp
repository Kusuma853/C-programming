#include <stdio.h>

int main() {

    char str1[100], str2[100], concat[200], rev[100];
    int i, j, len = 0;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    for(i = 0; str1[i] != '\0'; i++)
        len++;

    printf("\nLength of first string = %d\n", len);

    for(i = 0; i < len; i++) {
        concat[i] = str1[i];
    }

    // Add str2 after str1
    for(j = 0; str2[j] != '\0'; j++) {
        concat[i] = str2[j];
        i++;
    }

    concat[i] = '\0';

    printf("Concatenated string = %s\n", concat);

    int k = 0;
    for(i = len - 1; i >= 0; i--) {
        rev[k] = str1[i];
        k++;
    }

    rev[k] = '\0';

    printf("Reversed string = %s\n", rev);

    return 0;
}
