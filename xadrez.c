#include <stdio.h>

int main() {
    int torre = 0, bispo = 0, rainha = 0, cavalo = 1;

    // Movimentos da Torre:

    printf("Movimentos da Torre: \n\n");

    for (torre = 0; torre < 5; torre++)
    {
        printf("Direita\n");
    }

    // Movimentos do Bispo:

    printf("\nMovimentos do Bispo: \n\n");

    while (bispo < 5)
    {
        printf("Cima esquerda\n");
        bispo++;
    }
    
    // Movimentos da Rainha:
    
    printf("\nMovimentos da Rainha: \n\n");

    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);
    
    // Movimento do Cavalo:

   printf("\nMovimento do Cavalo: \n\n");

   while (cavalo--)
   {
    for (int i = 0; i < 2; i++)
    {
        printf("Baixo\n");
    }
    printf("Esquerda\n");
   }    

    return 0;
}
