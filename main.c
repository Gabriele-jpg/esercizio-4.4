#include <stdio.h>

int main() {
    int voto, somma = 0, conteggio = 0;
    float media;

    printf("Inserisci i voti (inserisci 0 per terminare):\n");

    while (1) {
        printf("Voto: ");
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        somma += voto;
        conteggio++;
    }

    if (conteggio != 0) {
        media = somma / conteggio;
        printf("La media dei voti è: %.2f\n", media);
    } else {
        printf("Nessun voto inserito.\n");
    }

    return 0;
}