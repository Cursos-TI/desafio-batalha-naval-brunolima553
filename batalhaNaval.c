#include<stdio.h>//jogo batalha naval

#define LINHAS 10
#define COLUNAS 10


int main(){


 //declarando vetores e matriz
 char coluna[10]= {'A','B','C','D','E','F','G','H','I','J'};
 int i,j;
 //criando o tabuleiro matriz 10x10
 int tabuleiro[LINHAS][COLUNAS];
  
 //Estrutura de repetição para matriz do jogo 
   for ( i = 0; i < LINHAS; i++)
   {   for ( j = 0; j < COLUNAS; j++)
      {   
        tabuleiro [i][j]=0;//declarando o tabuleiro =0
      }
   }


   //posiciona o navio na horizontal
   for ( i = 3; i < 6; i++)
   {    tabuleiro[3][i] =3;

         //posiciona navio na vertical
       for ( j = 5; j < 8; j++){
       tabuleiro[j][4] =3;
      }
      printf("\n"); //organização do código

   }


   //posiciona o navio na diagonal
    for ( i = 0; i < 3 ; i++)
    {
       tabuleiro[0 + i][0 + i]=3; //posiciona o navio na principal diagonal


       for (j = 0; j < 3; j++)
       {
         tabuleiro [0 + j][9 - j] = 3; //posiciona o navio na diagonal secundaria
         for (int k = 0; k < 3; k++)
         {
            tabuleiro[9 -k][9-k] =3; //POSICIONA o navio no final da secundaria diagonal
         }
         printf("\n");

       }
       
       printf("\n");
    }
    



  
      
   
   //Exibir Tabuleiro
 printf("***TABULEIRO BATALHA NAVAL***\n");
 
 for ( j = 0; j < 10; j++)//imprime as letras de A á J
 {
    printf("%3c",coluna[j]);// n° '3' da um espaçamento entre as letras no console
    
 }
   printf("\n");// organizar o codigo

    for ( i = 0; i < 10; i++)
   {  printf("%2d", 1 + i); // imprime a coluna numerica coordenadas do tabuleiro 
      
      for ( j = 0; j < 10; j++)
      {   
        printf("%3d",tabuleiro[i][j] );
        
      }
      printf("\n");
   } 







   

    return 0;
   }