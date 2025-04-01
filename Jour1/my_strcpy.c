#include <stdio.h> 

char *my_strcpy(char *destination, char *source) {
    char *originalDestination = destination; 

    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0'; 

    return originalDestination;
}

