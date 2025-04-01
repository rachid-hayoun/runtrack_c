#include <stdlib.h>

char *my_strdup(const char *str) {
    int length = 0;
    const char *temp = str;
    while (*temp != '\0') {
        length++;
        temp++;
    }

    char *new_str = (char *)malloc((length + 1) * sizeof(char));
    if (new_str == NULL) {
        return NULL;
    }

    char *ptr = new_str;
    while (*str != '\0') {
        *ptr = *str;
        ptr++;
        str++;
    }

    *ptr = '\0';

    return new_str;
}
