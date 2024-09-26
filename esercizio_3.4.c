#include <stdio.h>

int main() {
    char nome;
    char sesso;


    printf("Inserisci l'iniziale del nome: ");
    scanf(" %c", &nome);


    printf("Inserisci sesso (m o f): ");
    scanf(" %c", &sesso);


    if (sesso == 'm') {
        printf("Egregio signor %c\n", nome);
    } else if (sesso == 'f') {
        printf("Gentilissima signora %c\n",nome);
    } else {
        printf("Tipo di input non valido (Rispondi solo con m o f)\n");
    }

    return 0;
}
