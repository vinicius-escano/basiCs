#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	int numeros[8] = {3,5,8,2,0,7,1};
	int toInsert;
	
	printf("Informe um numero para inserir no vetor: ");
	scanf("%d", &toInsert);
	
	numeros[7] = toInsert;
	
	for(int i = 0; i < 8; i++){
		printf("Vetor[%d] = %d\n", i + 1, numeros[i]);
	}
	
	return 0;
}
