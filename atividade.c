#include <stdio.h>

int main(){
  

  char linha[10] = {'A', 'B', 'C', 'D', 'F', 'G', 'H', 'I', 'J'};

// criando o tabuleiro
int tabuleiro[10][10];

for (int i = 0; i < 10; i++){
    for (int j = 0; j < 10; j++){
        
        tabuleiro[i][j] = 0;
    }
    
}
   // exibindo o tabuleiro

   printf("Tabuleiro naval\n");
   printf("   ");

for (int j = 0; j < 10; j++) // numero de colunas
{
    printf("%c ", linha[j]);
}

printf("\n");


// navios na vertical

for (int i = 1; i <= 3; i++){ 
    tabuleiro[i][1] = 3;
}


//navios na horizontal

for (int j = 4; j <= 6; j++){
    tabuleiro[4][j] = 3;
}


//LINHAS DO TABULEIRO

for (int i = 0; i < 10; i++){
    
    printf("%2d ", i + 1);// numero da linha
    
    for (int j = 0; j < 10; j++){

        printf("%d ", tabuleiro[i][j]);//valor do tabuleiro
    }
printf("\n");//nova linha

}




return 0;



}