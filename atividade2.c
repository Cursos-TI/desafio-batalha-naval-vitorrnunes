#include <stdio.h>

#define linhas 10
#define colunas 10

int main(){
  //VARIAVEIS DO CODIGO
  int agua;
  char linha[10] = {'A', 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J'};

// criando o tabuleiro
int tabuleiro[linhas][colunas];

for (int i = 0; i < linhas; i++){ // NUMEROS DE LINHA
    for (int j = 0; j < colunas; j++){//NUMEROS DE COLUNAS
        
        tabuleiro[i][j] = 0;
        0 == agua;
    }
    
}
// exibindo o tabuleiro

   printf("Tabuleiro naval\n");
   printf("   ");

for (int j = 0; j < colunas; j++) // EXIBIÇÃO DAS LETRAS NA TABELA DO TABULEIRO
{
    printf("%c ", linha[j]);
}

printf("\n");


// navios na vertical

for (int i = 1; i <= 3; i++){//DE 1 A 3
    tabuleiro[i][1] = 3;
}


//navios na horizontal

for (int j = 4; j <= 6; j++){//DE 4 A 6
    tabuleiro[4][j] = 3;
}

//PRIMEIRO NAVIO NA DIAGONAL

for (int i = 6; i < 9; i++){//DE 6 A 9
    tabuleiro[i][5-i] = 3;
}

//SEGUNDO NAVIO NA DIAGONAL

for (int j = 1; j < 4; j++){//DE 1 A 4
    tabuleiro[9-j][j] = 3;
}



//LINHAS DO TABULEIRO

for (int i = 0; i < linhas; i++){
    
    printf("%2d ", i + 1);// numero da linha
    
    for (int j = 0; j < colunas; j++){

        printf("%d ", tabuleiro[i][j]);//valor do tabuleiro
    }
printf("\n");//nova linha

}




return 0;



}