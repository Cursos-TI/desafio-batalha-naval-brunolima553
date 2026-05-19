#include<stdio.h>//jogo batalha naval

int main(){


 //declarando vetores e matriz
 char colunas[10]= {'A','B','C','D','E','F','G','H','I','J'};
 int i,j;
 //criando o tabuleiro matriz 10x10
 int tabuleiro[10][10];
  
 //Estrutura de repetição para matriz do jogo 
   for ( i = 0; i < 10; i++)
   {   for ( j = 0; j < 10; j++)
      {   
        tabuleiro [i][j]=0;//declarando o tabuleiro =0
      }
   }


   //Posicionar navio Horinzontal 
   for ( i = 3; i < 6; i++)
   {
      tabuleiro[3][i] =3;
   }

   //Posicionar navio Vertical 
   for ( j = 0; j < 3; j++)
   {
      tabuleiro[j][9] =3;
   }
   printf("\n");
      
   
   //Exibir Tabuleiro
 printf("***TABULEIRO BATALHA NAVAL***\n");
 
 
 for ( j = 0; j < 10; j++)//imprime as letras de A á J
 {
    printf("%3c",colunas[j]);// n° '3' da um espaçamento entre as letras no console
    
 }


 printf("\n");// organizar o codigo

    for ( i = 0; i < 10; i++)
   {  printf("%2d",1 + i); // imprime a coluna numerica coordenadas do tabuleiro 
      
      for ( j = 0; j < 10; j++)
      {   
        printf("%3d",tabuleiro[i][j] );
        
      }
      printf("\n");
   } 

   


 


 
    




    








    return 0;
}