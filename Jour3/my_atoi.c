#include <string.h>
#include <stdio.h>

int my_atoi(char *str){
    str = "Hello";
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%d", i, str[i]);
    }
}
