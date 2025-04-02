#include <stdio.h>
#include "devide.c"
#include "swap.c"

int main() {
    int value = 16;

    printf("Avant division : %d\n", value);

    divide(&value); 

    printf("Après division : %d\n", value);

    return 0;

    int x = 10, y = 20;

    printf("Avant l'échange : x = %d, y = %d\n", x, y);

    swap(&x, &y); // Appel de la fonction swap avec les adresses des variables x et y

    printf("Après l'échange : x = %d, y = %d\n", x, y);

    return 0;
}

