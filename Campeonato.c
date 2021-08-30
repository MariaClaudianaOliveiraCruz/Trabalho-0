// Programa para gerenciar um campeonato de futebol mata-mata;
// Ingrid Castelo Gomes and Maria Claudiana Oliveira Cruz

#include <stdio.h>
#include <conio.h>
int main(void)
{
  int i, gol1, gol2;
  
  //declarando e atribuindo valores no vetor de char
  char times[17] = "ABCDEFGHIJKLMNOP";
  char rodada2[9] = "";
  char rodada3[5] = "";
  char rodada4[3] = "";
  
    printf("\nPrimeira Rodada Do Campeonato \n");
   printf("\nJogo 1: \n\n");
  
   printf("Digite os gols do time %c: ", times[0]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", times[1]);
   scanf("%d",&gol2);
   
   while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[0], gol1, gol2, times[1] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[0]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[1]);
     scanf("%d",&gol2);
        
    }
   
    if(gol1>gol2){
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[0], gol1, gol2, times[1] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[0] ); 
        rodada2[0]= times[0];
        
     }
   else{
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[0], gol1, gol2, times[1] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[1] );
        rodada2[0]= times[1];
     }
        
   printf("\nJogo 2: \n\n");
  
   printf("Digite os gols do time %c: ", times[2]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", times[3]);
   scanf("%d",&gol2);    
        
     while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[2], gol1, gol2, times[3] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[2]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[3]);
     scanf("%d",&gol2);
        
    }
   
    if(gol1>gol2){
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[2], gol1, gol2, times[3] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[2] ); 
        rodada2[1]= times[2];
        
     }
   else{
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[2], gol1, gol2, times[3] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[3] );
        rodada2[1]= times[3];
     } 
     
     
   printf("\nJogo 3: \n\n");
  
   printf("Digite os gols do time %c: ", times[4]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", times[5]);
   scanf("%d",&gol2);    
        
     while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[4], gol1, gol2, times[5] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[4]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[5]);
     scanf("%d",&gol2);
        
    }
   
    if(gol1>gol2){
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[4], gol1, gol2, times[5] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[4] ); 
        rodada2[2]= times[4];
        
     }
   else{
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[4], gol1, gol2, times[5] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[5] );
        rodada2[2]= times[5];
     } 
    
    printf("\nJogo 4: \n\n");
  
   printf("Digite os gols do time %c: ", times[6]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", times[7]);
   scanf("%d",&gol2);    
        
     while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[6], gol1, gol2, times[7] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[6]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[7]);
     scanf("%d",&gol2);
        
    }
   
    if(gol1>gol2){
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[6], gol1, gol2, times[7] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[6] ); 
        rodada2[3]= times[6];
        
     }
   else{
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[6], gol1, gol2, times[7] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[7] );
        rodada2[3]= times[7];
     } 
     
    
    printf("\nJogo 5: \n\n");
  
   printf("Digite os gols do time %c: ", times[8]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", times[9]);
   scanf("%d",&gol2);    
        
     while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[8], gol1, gol2, times[9] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[8]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[9]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[8], gol1, gol2, times[9] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[8] ); 
        rodada2[4]= times[8];
        
     }
   else{
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[8], gol1, gol2, times[9] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[9] );
        rodada2[4]= times[9];
     }
    
    printf("\nJogo 6: \n\n");
  
   printf("Digite os gols do time %c: ", times[10]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", times[11]);
   scanf("%d",&gol2);    
        
     while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[10], gol1, gol2, times[11] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[10]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[11]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[10], gol1, gol2, times[11] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[10] ); 
        rodada2[5]= times[10];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[10], gol1, gol2, times[11] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[11] );
        rodada2[5]= times[11];
     }
     
     printf("\nJogo 7: \n\n");
  
   printf("Digite os gols do time %c: ", times[12]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", times[13]);
   scanf("%d",&gol2);    
        
     while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[12], gol1, gol2, times[13] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[12]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[13]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[12], gol1, gol2, times[13] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[12] ); 
        rodada2[6]= times[12];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[12], gol1, gol2, times[13] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[13] );
        rodada2[6]= times[13];
     }
     
     printf("\nJogo 8: \n\n");
  
   printf("Digite os gols do time %c: ", times[14]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", times[15]);
   scanf("%d",&gol2);    
        
     while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[14], gol1, gol2, times[15] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[14]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", times[15]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[14], gol1, gol2, times[15] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[14] ); 
        rodada2[7]= times[14];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", times[14], gol1, gol2, times[15] );
        printf("\n O time %c venceu e passou para próxima rodada\n", times[15] );
        rodada2[7]= times[15];
     }
    
    
    
    printf("\n Os time que passaram para a próxima rodada foram:\n"); 
        
   for (i=0; i<8; i++)
  {
    printf(" %c  ", rodada2[i]);
  }
 
  
  printf("\nSegunda Rodada Do Campeonato \n");
   printf("\nJogo 1: \n\n");
  
   printf("Digite os gols do time %c: ", rodada2[0]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", rodada2[1]);
   scanf("%d",&gol2);
   
   while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[0], gol1, gol2, rodada2[1] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada2[0]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada2[1]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[0], gol1, gol2, rodada2[1] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada2[0] ); 
        rodada3[0]= rodada2[0];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[0], gol1, gol2, rodada2[1] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada2[1] );
        rodada3[0]= rodada2[1];
     }
  
  
  printf("\nJogo 2: \n\n");
  
   printf("Digite os gols do time %c: ", rodada2[2]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", rodada2[3]);
   scanf("%d",&gol2);
   
   while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[2], gol1, gol2, rodada2[3] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada2[2]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada2[3]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[2], gol1, gol2, rodada2[3] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada2[2] ); 
        rodada3[1]= rodada2[2];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[2], gol1, gol2, rodada2[3] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada2[3] );
        rodada3[1]= rodada2[3];
     }
  
  printf("\nJogo 3: \n\n");
  
   printf("Digite os gols do time %c: ", rodada2[4]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", rodada2[5]);
   scanf("%d",&gol2);
   
   while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[4], gol1, gol2, rodada2[5] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada2[4]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada2[5]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[4], gol1, gol2, rodada2[5] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada2[4] ); 
        rodada3[2]= rodada2[4];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[4], gol1, gol2, rodada2[5] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada2[5] );
        rodada3[2]= rodada2[5];
     }
     
     printf("\nJogo 4: \n\n");
  
   printf("Digite os gols do time %c: ", rodada2[6]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", rodada2[7]);
   scanf("%d",&gol2);
   
   while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[6], gol1, gol2, rodada2[7] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada2[6]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada2[7]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[6], gol1, gol2, rodada2[7] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada2[6] ); 
        rodada3[3]= rodada2[6];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada2[6], gol1, gol2, rodada2[7] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada2[7] );
        rodada3[3]= rodada2[7];
     }
  
  
  printf("\n Os time que passaram para a próxima rodada foram:\n"); 
        
   for (i=0; i<4; i++)
  {
    printf(" %c  ", rodada3[i]);
  }
  
  printf("\nTerceira Rodada Do Campeonato \n");
   printf("\nJogo 1: \n\n");
  
   printf("Digite os gols do time %c: ", rodada3[0]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", rodada3[1]);
   scanf("%d",&gol2);
   
   while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada3[0], gol1, gol2, rodada3[1] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada3[0]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada3[1]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada3[0], gol1, gol2, rodada3[1] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada3[0] ); 
        rodada4[0]= rodada3[0];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada3[0], gol1, gol2, rodada3[1] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada3[1] );
        rodada4[0]= rodada3[1];
     }
  
  printf("\nJogo 2: \n\n");
  
   printf("Digite os gols do time %c: ", rodada3[2]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", rodada3[3]);
   scanf("%d",&gol2);
   
   while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada3[2], gol1, gol2, rodada3[3] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada3[2]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada3[3]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
       
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada3[2], gol1, gol2, rodada3[3] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada3[2] ); 
        rodada4[1]= rodada3[2];
        
     }
   else{
        
        printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada3[2], gol1, gol2, rodada3[3] );
        printf("\n O time %c venceu e passou para próxima rodada\n", rodada3[3] );
        rodada4[1]= rodada3[3];
     }
  
  printf("\n Os time que passaram para a final foram:\n"); 
        
   for (i=0; i<4; i++)
  {
    printf(" %c  ", rodada4[i]);
  }
  
  printf("\nFinal Do Campeonato \n");
   printf("\nJogo Final: \n\n");
  
   printf("Digite os gols do time %c: ", rodada4[0]);
   scanf("%d",&gol1);
   printf("\nDigite os gols do time %c: ", rodada4[1]);
   scanf("%d",&gol2);
   
   while (gol1==gol2) {
     
     printf("\n O Placar do jogo ficou Time %c %d x %d Time %c \n", rodada4[0], gol1, gol2, rodada4[1] );  
     printf("\n O resultado foi um empate\n");
     
     printf("\n O jogo seguirá para os pênaltis\n"); 
     
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada4[0]);
     scanf("%d",&gol1);
     printf("\n Total de gols feitos nos pênaltis pelo time %c: ", rodada4[1]);
     scanf("%d",&gol2);
        
    }
   
   if(gol1>gol2){
       
        printf("\n O Placar do jogo final ficou Time %c %d x %d Time %c \n", rodada4[0], gol1, gol2, rodada4[1] );
        printf("\n O time %c foi o campeão do campeonato\n", rodada4[0] ); 
        printf("\n O time %c foi o vice campeão do campeonato\n", rodada4[1] ); 
        
     }
   else{
        
        printf("\n O Placar do jogo final ficou Time %c %d x %d Time %c \n", rodada4[0], gol1, gol2, rodada4[1] );
        printf("\n O time %c foi o campeão do campeonato\n", rodada4[1] );
        printf("\n O time %c foi o vice campeão do campeonato\n", rodada4[0] );
     }
  
  
  return 0;
}