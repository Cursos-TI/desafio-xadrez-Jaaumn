#include <stdio.h>

void movimentotorreR(int numero){  //logica de recusividade para torre, enquanto numero menor ou igual a 5 printa e +1 em numero ate printar os 5 movimentos da torre
    if (numero <= 5)
    {
        printf("#Movimento - direita\n");
        movimentotorreR(numero + 1);
    }
}

void movimentobispoR(int numero){ 
    for (int i = 1; i <=5;i++)
    {
        printf("Movimento - Cima\n");
        for (int j = 0; j < 1; j++)
        {
            printf("Movimento - Direita\n");
        }
        
    }
    
}

void movimentorainhaR(int numero){  //logica de recusividade para rainha, enquanto numero menor ou igual a 8 printa e +1 em numero ate printar os 8 movimentos da rainha
    if (numero <= 8)
    {
        printf("Movimento - Esquerda\n");
        movimentorainhaR(numero + 1);
    }
}

int main (){
    int torre = 1, bispo = 1, rainha = 1;
    int movimentocavalo = 1;

    printf("\n");
    printf("# Peça - Torre #\n");
    movimentotorreR (torre); // implementação da recursividade da torre

    printf("\n");
    printf("# Peça - Bispo #\n");
    movimentobispoR (bispo); // implementação da recursividade do bispo
    
    printf("\n");
    printf("# Peça - Rainha #\n");
    movimentorainhaR (rainha); // implementação da recursividade da rainha
    
    printf("\n");
    printf("# Peça - Cavalo #\n");
    for (int i = 0, j = 0; i < 2, j < 2; i++, j++) // movimentação do cavalo
    {
        printf("Movimento - Cima\n"); 
        if (j > 0)
        {
            printf("Movimento - Direita\n");
        }
        
    }
    
    
    
    

    return 0;
}
