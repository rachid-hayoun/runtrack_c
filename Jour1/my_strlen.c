#include <stdio.h>
#include <string.h>
#include <unistd.h>

int my_strlen(char*str){
    int length = 0;
    while(*str != '\0')
    { 
        length++;
        str++;
    }
    return length;
}