#include <stdio.h>

// funkcja licząca długość napisu (bez '\0')
int my_strlen(const char s[]) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    return len;
}

int main(void) {

// tablica na wczytany tekst
char buffer[100];

printf("Prosze podac zdanie: ");

// wczytuje linię tekstu
fgets(buffer, 100, stdin);

int dlugosc = my_strlen(buffer);

 // jeśli ostatni znak to '\n' (fgets go wczytuje), usuwamy go
if (dlugosc > 0 && buffer[dlugosc - 1] == '\n') {
        dlugosc--;
    }


// wyświetla długość tekstu
printf("Dlugosc twojego tekstu to: %d znakow.\n", dlugosc);

return 0;

}
