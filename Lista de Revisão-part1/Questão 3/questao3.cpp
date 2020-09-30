#include <iostream>
#include<cstdlib>
#include <stdlib.h>
#include <time.h>

using namespace std;

void gerar_Aleatorios(int numeros[10][10], int limite)
{
	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			numeros[i][j] = rand() % limite;
		}

	}
}

void mostrarMatriz(int numeros[10][10])
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			cout << numeros[i][j] << " ";
		}
		cout << endl;
	}
}
int main(int argc, char** argv)
{
	int a, limite;
	int vetor[10][10];
	cout << "Esse programinha imprime na tela matrizes 10X10" << endl;
	cout << "Digite 1 para o sistema preencher automaticamente ou qualquer tecla para voce mesmo preencher:" ;
	cin >> a;

	if(a == 1 )
	{
		cout << "Digite o valor maximo que o numero pode assumir: ";
		cin >> limite;
		gerar_Aleatorios(vetor, limite);
	}
	else
	{
		cout << "Preencha a matriz 10X10: " << endl;
		for(int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{

				cin >> vetor[i][j];
			}

		}
	}
	mostrarMatriz(vetor);


	return 0;


}



