#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX_ACCOUNTS 100

/* deklaracje funkcji */
void print_menu(void);
void deposit(double saldo[], int n);
void withdraw(double saldo[], int n);
void show_balance(const double saldo[], int n);

/* definicje funkcji */

void print_menu(void) {
    printf("Symulacja aplikacji bankowej.\n");
    printf("Polecenia:\n");
    printf("0 - zakoncz program\n");
    printf("1 - wplata (DEPOSIT)\n");
    printf("2 - wyplata (WITHDRAW)\n");
    printf("3 - wyswietlenie salda (SHOW)\n");
}

void deposit(double saldo[], int n) {
    int konto;
    double kwota;

    printf("Podaj numer konta (0-%d) i kwote: ", n - 1);
    scanf("%d %lf", &konto, &kwota);

    if (konto < 0 || konto >= n || kwota < 0) {
        printf("Bledne dane.\n");
        return;
    }

    saldo[konto] += kwota;
    printf("DEPOSIT OK. Konto %d nowe saldo: %.2lf\n", konto, saldo[konto]);
}

void withdraw(double saldo[], int n) {
    int konto;
    double kwota;

    printf("Podaj numer konta (0-%d) i kwote: ", n - 1);
    scanf("%d %lf", &konto, &kwota);

    if (konto < 0 || konto >= n || kwota < 0) {
        printf("Bledne dane.\n");
        return;
    }

    if (saldo[konto] >= kwota) {
        saldo[konto] -= kwota;
        printf("WITHDRAW OK. Konto %d nowe saldo: %.2lf\n", konto, saldo[konto]);
    } else {
        printf("WITHDRAW ERROR: za malo srodkow na koncie %d\n", konto);
    }
}

void show_balance(const double saldo[], int n) {
    int konto;

    printf("Podaj numer konta (0-%d): ", n - 1);
    scanf("%d", &konto);

    if (konto < 0 || konto >= n) {
        printf("Bledne dane.\n");
        return;
    }

    printf("SHOW: konto %d saldo = %.2lf\n", konto, saldo[konto]);
}

/* funkcja main */

int main(void) {
    double saldo[MAX_ACCOUNTS] = { 0 };
    int command;

    print_menu();

    while (1) {
        printf("\nPodaj polecenie: ");
        scanf("%d", &command);

        switch (command) {
            case 0:
                printf("Koniec programu.\n");
                return 0;

            case 1:
                deposit(saldo, MAX_ACCOUNTS);
                break;

            case 2:
                withdraw(saldo, MAX_ACCOUNTS);
                break;

            case 3:
                show_balance(saldo, MAX_ACCOUNTS);
                break;

            default:
                printf("Nieznane polecenie.\n");
        }
    }
}
