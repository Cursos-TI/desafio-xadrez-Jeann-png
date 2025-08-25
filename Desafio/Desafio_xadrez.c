#include <stdio.h>

int main(){

int bispo = 0, torre = 0, rainha;

//Bispo: 5 casas na diagonal superior direita
printf("Movimento do Bispo.\n");
while (bispo < 5){
    printf("Bispo: Frente, Direita.\n");
    bispo++;}

//Torre: 5 casas para a direita
printf("\nMovimento da Torre.\n");
do{
    printf("Torre: Direira.\n");
    torre++;
} while (torre < 5);

//Rainha: 8 casas para a esquerda
printf("\nMovimento da Rainha.\n");
for (rainha = 1; rainha <= 8; rainha++){
    printf("Rainha: Esquerda.\n ");}


return 0;
}