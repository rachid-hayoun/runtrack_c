#include <string.h>

int str_in_digit(char *str){
    while(*str){
        if (*str > '0' || *str < '9'){
            return 1;
        }
        str++;
    }
    return 0;
}
