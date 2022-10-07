#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void select(int vet[]){
	
	int menorPos, aux;
	
	for(int i = 0; i < TAM - 1; i++){
		menorPos = i;
		for(int j = i + 1; j < TAM; j++){
			if(vet[menorPos] > vet[j]){
				menorPos = j;
			}
		}
		if(i != menorPos){
			aux = vet[i];
			vet[i] = vet[menorPos];
			vet[menorPos] = aux;
		}
	}
		
}


int main (){
	
	setlocale(LC_ALL, "");
	
	int numeros[TAM];
	int i, aux, contador;
	
	printf("Entre com dez numeros para preencher o array, e pressione enter após digitar cada um: \n");
	for(i = 0; i < TAM; i++){
		scanf("%d", &numeros[i]);
	}
	
	printf("Ordem atual dos item no array: \n");
	
	for(i = 0; i < TAM; i++){
		printf("%4d", numeros[i]);
	}
	
	select(numeros);
	
	printf("\nArray Ordenado: \n");
	
	for(i = 0; i < TAM; i++){
		printf("%4d", numeros[i]);
	}
	
}
