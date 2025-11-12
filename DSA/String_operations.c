#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s1[1024], s2[1024];

    printf("Enter first string: ");
    if (!fgets(s1, sizeof s1, stdin)) return 0;

    printf("Enter second string: ");
    if (!fgets(s2, sizeof s2, stdin)) return 0;

    /* remove trailing newline if present */
    s1[strcspn(s1, "\r\n")] = '\0';
    s2[strcspn(s2, "\r\n")] = '\0';

    size_t len1 = strlen(s1), len2 = strlen(s2);
    char *concat = malloc(len1 + len2 + 1);
    if (!concat) {
        perror("malloc");
        return 1;
    }

    memcpy(concat, s1, len1);
    memcpy(concat + len1, s2, len2 + 1); /* copy terminating NUL */

    printf("Concatenated string: %s\n", concat);

    free(concat);
    return 0;
}