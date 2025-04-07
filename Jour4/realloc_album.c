#ifndef ALBUM_H
#define ALBUM_H

typedef struct {
    char *title;
    char *artist;
    int year;
} album;

void print_album(album *a);
album* realloc_album(album *old_array, int old_size, int new_size);

#endif