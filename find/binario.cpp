#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define TAM 10

int recursiva(int vet[], int chave, int inicio, int fim){
	int meio;
	if(inicio <= fim){
		meio = (inicio + fim) / 2;
		if(chave == vet[meio]){
			printf("\nEncontrado na posição %d do vetor", meio + 1);
			return 1;
		} else {
			if(chave < vet[meio]){
				return recursiva(vet, chave, inicio, meio - 1);
			} else {
				return recursiva(vet, chave, meio + 1, fim);
			}
		}
	}
	return -1;
}

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
	int i, op, valor;
	
	printf("Entre com dez numeros para preencher o array, e pressione enter após digitar cada um: \n");
	for(i = 0; i < TAM; i++){
		scanf("%d", &numeros[i]);
	}
	
	printf("\nOrdem atual dos item no array: \n");
	
	for(i = 0; i < TAM; i++){
		printf("%4d", numeros[i]);
	}
	
	bubble(numeros);
	
	printf("\nArray Organizado: \n");
	
	for(i = 0; i < TAM; i++){
		printf("%4d", numeros[i]);
	}
	
	do{
		printf("\nDigite um valor para buscar: ");
		scanf("%d", &valor);
		recursiva(numeros, valor, 0, TAM);
		
		printf("\n\n0 - Sair \n1 - Nova Busca");
		scanf("%d", &op);
	}while(op != 0);
	
}
