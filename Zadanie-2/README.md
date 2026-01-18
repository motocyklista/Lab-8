# Program: "Transpozycja macierzy"
Program napisany w języku C, który wczytuje macierz prostokątną (liczbę wierszy i kolumn podaje użytkownik) oraz jej elementy, a następnie wypisuje macierz transponowaną. Program obsługuje błędy danych wejściowych, takich jak ujemna liczba wierszy/kolumn lub niepoprawne dane.

---

## Informacje techniczne
- **Język:** C  
- **Edytor:** Microsoft Visual Studio Code  
- **Kompilator:** Clang (`clang -Wall`)  
- **System:** Windows  

> 💡 Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code.

---

## Kompilacja
Aby skompilować program, w terminalu uruchom:

```bash
clang -Wall Lab7_2.c
````


---
## Uruchomienie programu
Po kompilacji uruchom plik wykonywalny:

```bash
Lab7_2.exe
```
Program poprosi o podanie tekstu i zakończenie go enterem. Następnie zwróci wynik:

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>Lab7_2.exe
2 3
1 2 3
4 5 6
1 4
2 5
3 6
```
```
C:\Users\X\Desktop\homework>Lab7_2.exe
-2 6
BLAD DANYCH WEJSCIOWYCH

```

---

## Działanie programu

1. Program prosi o podanie liczby wierszy (R) i kolumn (C).
2. Sprawdza poprawność danych wejściowych (R >= 1, C >= 1).
3. Tworzy macierz o zmiennym rozmiarze (VLA) matrix[R][C].
4. Wczytuje elementy macierzy wierszami. Jeśli dane wejściowe są niepoprawne, wyświetla komunikat "BLAD DANYCH WEJSCIOWYCH".
5. Wypisuje macierz transponowaną: elementy wiersza transponowanego oddzielone spacją, każdy wiersz w nowej linii.

---
## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

```

