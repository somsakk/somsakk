// Example from https://www.programiz.com/c-programming/c-enumeration

#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;
// typedef char BYTE;

typedef struct {
    int length_in_seconds;
    int year_recorded;
    BYTE initial;
} SONG;

int main()
{
    SONG song1, song2;
    
    song1.length_in_seconds = 213;
    song1.year_recorded = 1994;
    song1.initial = 'c';
    
    song2.length_in_seconds = 248;
    song2.year_recorded = 1988;
    song2.initial = song1.initial;

    /* print song1 info */
    printf("Song 1 length: %d seconds\n", song1.length_in_seconds);
    printf("Song 1 year recorded: %d\n", song1.year_recorded);
    printf("Song 1 intial: %c\n", song1.initial);
    printf("sizeof (song1): %d bytes\n", (int) sizeof(song1));

    /* print song2 info */
    printf("Song 2 length: %d seconds\n", song2.length_in_seconds);
    printf("Song 2 year recorded: %d\n", song2.year_recorded);
    printf("Song 2 intial: %c\n", song2.initial);
    printf("sizeof (song2): %d bytes\n", sizeof(song2));

}
