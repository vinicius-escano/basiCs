#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 8

int main(){
	
	int numeros[] = {9,8,3,2,6,4,5,1};
	int toInsert, pos, inicio, aux, i;
	
	for(int i = 0; i < 8; i++){
		printf("Vetor[%d] = %d\n", i + 1, numeros[i]);
	}
	
	printf("Informe uma posicao do vetor de 1 a 8 para remover: ");
	scanf("%d", &pos);
		
	numeros[pos - 1] = toInsert;
	
	printf("Trocado vetor posicao [%d] pelo valor %d e ordenado novamente\n", pos, toInsert);
	
	for(int i = 0; i < 8; i++){
		printf("Vetor[%d] = %d\n", i + 1, numeros[i]);
	}
	
	return 0;
}
