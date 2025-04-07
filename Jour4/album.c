#ifndef ALBUM_H
#define ALBUM_H

typedef struct {
    char *title;
    char *artist;
    int year;
} album;

void print_album(album *a);

#endif 
