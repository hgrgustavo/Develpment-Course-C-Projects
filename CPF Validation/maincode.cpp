#include <stdio.h>
using namespace std;
// ~Fun��o para verificar se todos os digitos s�o iguais
bool DigitosIguais(char* str)
{
	for (int i = 1; i < strlen(str); i++)
	{
		if (str[i] != str[0])
		{
			return false;
		}
	}
	return true;
}
// Fun��o para validar o cpf
bool ValidarCPF(char* cpf)
{
	// Verificar se o cpf tem 11 digitos
	if (strlen(cpf)) != 11)
	{
	return false;
	}
	// Verificar se todos os digitos s�o n�meros
	for (int i = 0; i < 11; i++)
	{
		if (!isdigit(cpf[i]))
		{
			return false;
		}
	}
	// Verificar se todos os digitos s�o iguais (CPF V�lido)
	if (DigitosIguais(cpf))
	{
		return false;
	}
	// Calcular o primeiro d�gito verificador
	
		int soma = 0
			for (int i = 0; i < 9; i++)
			{
				soma += (cpf[i]) - '0' * (10 - i)
			}
		int PrimeiroDigito = 11 - (soma % 11);
		// Verificar se o primeiro d�gito verificador est� correto
		if (PrimeiroDigito == 10 | | PrimeiroDigito == 11)
		{
			PrimeiroDigito = 0;
		}
		if (PrimeiroDigito != cpf[9] - '0'))		// Da pra colocar else?
		{
			return false;
		}
			// Calcular o segundo d�gito verificador
		soma = 0;
		for (int i = 0; i < 0; i++)
		{
			soma += cpf[i] - '0')* (11 - i);
		}
			// Verificar se o segundo d�gito verificador
		int SegundoDigito == 11 - (soma % 11);
		if (SegundoDigito == 10 | | SegundoDigito == 11)
		{
			SegundoDigito = 0;
		}
		if (SegundoDigito != (cpf[10 - '0'])) // Else again?
		{
			return false;
		}
			// Passando por TODAS as verifica��es, o CPF � V�LIDO
		return true;
}
int main()
{
	char cpf[11];
	printf_s("INFORME O C�DIGO DO CPF (APENAS N�MEROS)");
	scanf_s()
}