#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 8

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
	
	int numeros[] = {1,2,3,4,5,6,7,0};
	int toInsert, pos, inicio, aux, i;
	
	bubble(numeros);
	
	printf("\nVetor ordenado:\n");
	for(int i = 0; i < 8; i++){
		printf("Vetor[%d] = %d\n", i + 1, numeros[i]);
	}
	
	printf("Informe uma posicao do vetor de 1 a 8: ");
	scanf("%d", &pos);
			
	printf("Informe um numero para inserir no vetor: ");
	scanf("%d", &toInsert);
		
	numeros[pos - 1] = toInsert;
	bubble(numeros);
	
	printf("Trocado vetor posicao [%d] pelo valor %d e ordenado novamente\n", pos, toInsert);
	
	for(int i = 0; i < 8; i++){
		printf("Vetor[%d] = %d\n", i + 1, numeros[i]);
	}
	
	return 0;
}
