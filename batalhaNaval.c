#include <stdio.h>

#define TAMANHO_TABULEIRO 10 //Definição do tamanho fixo do tabuleiro 
#define TAMANHO_NAVIO 3 //Definição do tamanho fixo do navio

//Repetições criadas para iniciar tabuleiro com valor 0.
void iniciarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
       
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            tabuleiro[i][j] = 0;           
        }        
    }
}

//Repetições para impressão de tabuleiro no final
void mostrarTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]) {
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
       printf("%2d ",i +1); // exibi os numeros da linha na lateral
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

//Regra de posiocionamento do navio na horizontal
void NavioHorizontal(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna){
    for (int i = 0; i < TAMANHO_NAVIO; i++){
        tabuleiro[linha][coluna + i] = 3;
    }
    
}

//Regra de posiocionamento do navio na vertical
void NavioVertical(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int linha, int coluna){
    for (int i = 0; i < TAMANHO_NAVIO; i++){
        tabuleiro[linha + i][coluna] = 3;
    }
    
}

int main(){
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
    char letras = 'A'; //Exibição das letras na parte superior do tabuleiro
    
    //incialização de tabuleiro zerado.
    iniciarTabuleiro(tabuleiro);

    //Posicionamento dos navios
    //Navio da horizontal posicionado na (linha 2, coluna 3)
    NavioHorizontal(tabuleiro,1 ,2);
    
    //Navio da vertical posicionado na (linha 6, coluna 8)
    NavioVertical(tabuleiro, 5, 7);
    
    printf("TABULEIRO DE BATALHA NAVAL\n");        
    printf("  "); // Ajuste de espaço das letras
    
    //Função para aparecer letra no tabuleiro.
    for (int i = 0; i < TAMANHO_TABULEIRO; i++){
        printf(" %c",letras + i);
    }
    printf("\n") ;  

    //Impressão do resultado final no tabuleiro
    mostrarTabuleiro(tabuleiro);    
}
