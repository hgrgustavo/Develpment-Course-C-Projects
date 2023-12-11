#include <stdio.h>
#include <stdlib.h>
#include "code.h"
#define NumVetor 5			// Declara��o de Constante
 
int SomaVetor(int Vetor[], int Tamanho); 	// Declara��o e inicializa��o do vetor
int main()
{
	int Vetor[NumVetor] = { 22, 5, 11, 3, 6 }; 
	int I, Soma = 0;
	int Resultado = SomaVetor(Vetor, NumVetor);			// Chamada da fun��o recursiva

	printf("FUN��O RECURSIVA: \n");
		//Impress�o do resultado da fun��o recursiva
	printf("SOMA COM A FUN��O RECURSIVA:  %i\n", Resultado);

	printf("\n");

	for (I = 0; I < NumVetor; I++)		// La�o de vetor
	{
		Soma += Vetor[I];	// Soma dos elementos do vetor}
		printf("FUN��O ITERATIVA: \n");
		printf("SOMA COM LA�O FOR: %d\n\n", Soma);			// Impress�o do resultado do for
		system("pause");
		return 0;
	}
	int SomaVetor(int Vetor[], int Tamanho);	// Fun��o Recursiva
	{
		if (Tamanho == 1)
		{
			return Vetor[0];
		}
		else
		{
			// Soma dos elementos do vetor
			return Vetor[Tamanho - 1] + SomaVetor(Vetor, Tamanho - 1);
		}
			
	}
}
