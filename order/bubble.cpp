#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void bubble(int vet[]){
	
	int contador, aux;
	
	for(contador = 1; contador < TAM; contador++){
		for(int i = 0; i < TAM - 1; i++){
			if(vet[i] > vet[i + 1]){
				aux = vet[i];
				vet[i] = vet[i + 1];
				vet[i + 1] = aux;
			}
		}
	}
	
}

int main(){
	
	setlocale(LC_ALL, "");
	
	int numeros[TAM];
	int i;
	
	printf("Entre com dez numeros para preencher o array, e pressione enter após digitar cada um: \n");
	for(i = 0; i < TAM; i++){
		scanf("%d", &numeros[i]);
	}
	
	printf("Ordem atual dos item no array: \n");
	
	for(i = 0; i < TAM; i++){
		printf("%4d", numeros[i]);
	}
	
	bubble(numeros);
	
	printf("\nElementos do Array em ordem crescente: \n");
	for(i = 0; i < TAM; i++){
		printf("%4d", numeros[i]);
	}
	printf("\n");
	return 0;
}

