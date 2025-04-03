#include <stdio.h>

int main (){
    int torre = 1, bispo = 1, rainha = 1;
    int movimentocavalo = 1;

    while (torre <=5) //enquanto a condição for verdadeira, roda o loop
    {
        printf("# Peça - Torre #\nMovimento - direita\n");
        torre++; // incremento para evitar loop infinito
    }

    do
    {
        printf("# Peça - Bispo #\nMovimento - Diagonal (Cima e Direita)\n");
        bispo++;
    } while (bispo <=5);

    for(rainha; rainha <=8; rainha++)
    {
        printf("# Peça - Rainha #\nMovimento - Esquerda\n");
    } 
    
    //movimentação do cavalo
    while (movimentocavalo--) //decreção para condiçaõ virar falsa
    {
        printf("\n# Peça - Cavalo #\n");
        for (int i = 0; i < 2; i++)
        {
            printf("Movimento - Baixo\n");
        }
        printf("Movimento - Esquerda\n");
    }
    
    
    
    
    

    return 0;
}
