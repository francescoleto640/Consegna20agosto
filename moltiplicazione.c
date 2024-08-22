#include <stdio.h>

int main()
{
    int primo_numero;
    int secondo_numero;
    

    printf("Inserisci il primo numero:\n");
    scanf("%d", &primo_numero);
    printf("Inserisci il secondo numero:\n");
    scanf("%d", &secondo_numero);

    int moltiplicazione;
    moltiplicazione = primo_numero*secondo_numero;

    printf ("La moltiplicazione dei due numeri inseriti e': %d\n", moltiplicazione);
    



}