#include<stdio.h>//jogo batalha naval

#define LINHAS 10
#define COLUNAS 10
#define LINHA_MENOR 3
#define COLUNA_MENOR 5

int main(){


 //declarando vetores e matriz
 char coluna[10]= {'A','B','C','D','E','F','G','H','I','J'};
 int i,j;
 //criando o tabuleiro matriz 10x10
 int tabuleiro[LINHAS][COLUNAS];


 int matriz_cruz[LINHA_MENOR][COLUNA_MENOR] = {
  {0,0,5,0,0},
  {5,5,5,5,5},
  {0,0,5,0,0}
 };

 int matriz_cone[LINHA_MENOR][COLUNA_MENOR] ={
  {0,0,5,0,0},
  {0,5,5,5,0},
  {5,5,5,5,5}
 };

 int matriz_octaedro[LINHA_MENOR][COLUNA_MENOR] ={
  {0,0,5,0,0},
  {0,5,5,5,0},
  {0,0,5,0,0}
 };
     // Coordenadas de onde cada submatriz vai entrar (Linha, Coluna)
  int inicio_lin1 = 0, inicio_col1 = 2;
  int inicio_lin2 = 7, inicio_col2 = 0;
  int inicio_lin3 = 7, inicio_col3 = 5;


  
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
         

       }
       
       printf("\n");
    }
       

      //exibir matriz menor Cruz na maior
      for ( i = 0; i < 3; i++)
      {
        for ( j = 0; j < 5; j++)
        {
           tabuleiro[inicio_lin1 + i][inicio_col1 + j] = matriz_cruz[i][j];
        }
        
      }
      

           //exibir matriz menor Conena maior
      for ( i = 0; i < 3; i++)
      {
        for ( j = 0; j < 5; j++)
        {
           tabuleiro[inicio_lin2 + i][inicio_col2 + j] = matriz_cone[i][j];
        }
        
      }
    
           //exibir matriz menor octaedro na maior
      for ( i = 0; i < 3; i++)
      {
        for ( j = 0; j < 5; j++)
        {
           tabuleiro[inicio_lin3 + i][inicio_col3 + j] = matriz_octaedro[i][j];
        }
        
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