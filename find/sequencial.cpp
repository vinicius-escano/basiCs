#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int tam = 100;
	int vet[tam], i, n;
	
	srand(time(NULL));
	
	for(i = 0; i < tam; i++){
		vet[i] = rand() % 51;
	}
	
	for(i = 0; i < tam; i++){
		printf("Vet[%d] = %d \n", i + 1, vet[i]);
	}
	
	printf("Valor para buscar? ");
	scanf("%d",&n);
	
	for(i = 0; i < tam; i++){
		if(vet[i] == n){
			printf("%d ocorre na posicao %d do vetor\n", n, i + 1);
		}
	}
	
	return 0;
	
	
}
