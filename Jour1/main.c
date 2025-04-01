#include <stdio.h>
#include "my_putchat.c"
#include "my_putstr.c"
#include "my_strlen.c"
#include "char_is_digit.c"
#include "str_in_digit.c"

int main() {
    my_putchar('c');
    my_putstr("Bonjour"); 
    printf("%d\n", my_strlen("Selem")); 

    char c1 = 'p';
    char_is_digit(c1);
    return 0;

    char *test_str = "12345";    // Exemple de chaîne à tester
    if (str_in_digit(test_str)) {
        my_putstr("La chaîne est composée uniquement de chiffres.\n");
    } else {
        my_putstr("La chaîne contient des caractères non numériques.\n");
    }

    return 0;
}
