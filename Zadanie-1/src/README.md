# Program: "Własna funkcja my_strlen"

Program w języku C, który wczytuje zdanie od użytkownika i oblicza liczbę znaków w napisie (nie licząc znaku końcowego \0). Program używa własnej funkcji my_strlen do liczenia znaków i obsługuje znak nowej linii wczytany przez fgets.


---

## Informacje techniczne

* **Język:** C
* **Edytor:** Microsoft Visual Studio Code
* **Kompilator:** Clang (`clang -Wall`)
* **System:** Windows

> 💡 Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code.

---

## Kompilacja

Aby skompilować program, w terminalu uruchom:

```bash
clang -Wall strlen.c -o strlen.exe
```

---

## Uruchomienie programu

Po kompilacji uruchom plik wykonywalny:

```bash
strlen.exe
```

1. Program poprosi o podanie zdania (maksymalnie 100 znaków). Następnie wypisze długość wczytanego napisu:

Prosze podac zdanie:

2. Po wpisaniu tekstu i naciśnięciu Enter, program wypisze komunikat:

Dlugosc Twojego tekstu to: X znakow.

* gdzie X to liczba znaków w zdaniu (bez znaku końcowego \0 i ewentualnego \n).

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>strlen.exe
Prosze podac zdanie: Ala ma kota
Dlugosc Twojego tekstu to: 11 znakow.
```

```
C:\Users\X\Desktop\homework>strlen.exe
Prosze podac zdanie: Hello, World!
Dlugosc Twojego tekstu to: 13 znakow.
```

```
C:\Users\X\Desktop\homework>strlen.exe
Prosze podac zdanie: 
Dlugosc Twojego tekstu to: 0 znakow.
```

```
C:\Users\X\Desktop\homework>strlen.exe
Prosze podac zdanie: Yamaha
Dlugosc Twojego tekstu to: 6 znakow.
```

---

## Działanie programu

1. Program prosi użytkownika o wprowadzenie zdania (tekst wczytywany jest funkcją fgets).
2. Wczytany tekst jest przekazywany do funkcji my_strlen, która zlicza liczbę znaków do napotkania \0.
3. Jeśli fgets wczytał znak nowej linii \n, program usuwa go przed wyświetleniem długości.
4. Program wypisuje długość napisu w formacie:
   Dlugosc Twojego tekstu to: X znakow.
6. Program kończy działanie po wyświetleniu długości.

---

## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang
