//Desafio Super Tunfo - Nível Básico

#include <stdio.h>
#include <string.h>
int main(){ 

//Variáveis usadas

char estado01[20], estado02[20],codigo01, codigo02, nome_da_cidade01[20], nome_da_cidade02[20];
int  populacao01, populacao02;
int numero_de_pontos_turisticos01, numero_de_pontos_turisticos02;
float pib01, pib02, area_dacidade01, area_dacidade02;

//Entrada e leitura de Dados

printf("Digite uma letra para representar o estado (A ou B):\n");
scanf ("%c", &estado01);

printf("Digite o codigo da carta (01 ou 02): \n");
scanf ("%c", &codigo01);

printf ("Digite o nome da cidade: \n");
scanf ("%s", &nome_da_cidade01);

printf ("Digite o numero de habitantes da cidade: \n");
scanf ("%d", &populacao01);

printf ("Digite o número de pontos turisticos da cidade: \n");
scanf("%d", &numero_de_pontos_turisticos01);

printf ("Digite a área da cidade em quilômetros: \n");
scanf ("%f",&area_dacidade01);

printf ("Digite o Pib da cidade: \n");
scanf ("%f", pib01);

return 0;
}