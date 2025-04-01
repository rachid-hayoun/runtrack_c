#include <unistd.h>

int char_is_digit(char c) {
    if (c >= '0' && c <= '9') {
        write(1, "1, c'est un chiffre\n", 20);
        return 1;
    } else {
        write(1, "0, ce n'est pas un chiffre\n", 27);
        return 0;
    }
}
