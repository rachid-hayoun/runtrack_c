#include <stdlib.h>
#include <string.h>
#include "array_clone.h"

char **array_clone(char **array, int n) {
    if (!array || n <= 0) return NULL;
    
    // Déterminer la taille à copier
    int count = 0;
    while (count < n && array[count] != NULL) {
        count++;
    }
    
    // Allouer le tableau + terminateur NULL
    char **clone = malloc((count + 1) * sizeof(char *));
    if (!clone) return NULL;
    
    // Copie des chaînes
    for (int i = 0; i < count; i++) {
        clone[i] = strdup(array[i]);
        if (!clone[i]) {
            // Nettoyage en cas d'erreur
            for (int j = 0; j < i; j++) free(clone[j]);
            free(clone);
            return NULL;
        }
    }
    
    clone[count] = NULL; // Terminateur
    return clone;
}
