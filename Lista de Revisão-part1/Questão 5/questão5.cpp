#include <iostream>
#include<cstdlib>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string.h>
using namespace std;
//essa função "Gerar aleatorios vai gerar uma matriz 10x10 no arquivo"
void gerar_Matriz1(int numeros[10][10], int limite)
{
	ofstream arquivo;
	arquivo.open("Matriz1.txt");

	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			numeros[i][j] = rand() % limite;
            arquivo << numeros[i][j]<< endl;
		}

	}

	arquivo.close();
	cout << "o arquivo "<<"Matriz1.txt"<<" foi criado com sucesso!" << endl;

}
void gerar_Matriz2(int numeros[10][10], int limite)
{
	ofstream arquivo;
	arquivo.open("Matriz2.txt");

	srand(time(NULL));
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			numeros[i][j] = rand() % limite;
            arquivo <<	numeros[i][j]<< endl;
		}

	}

	arquivo.close();
	cout << "o arquivo "<<"Matriz1.txt"<<" foi criado com sucesso!" << endl;

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
void somar_matrizes(int vetorA[10][10], int vetorB[10][10], int soma[10][10])
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10; j++)
		{
			soma[i][j] = vetorA[i][j] + vetorB[i][j];
		}
	}


}
void abrir_arquivo_da_matriz1(int vetor[10][10])
{
	ifstream arquivo;
	arquivo.open("Matriz1.txt");
	if (arquivo.is_open())
	{

		for(int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				arquivo >>	vetor[i][j];

			}

		}

	}
	else
	{

		cout << "Não foi possivel abrir o arquivo" << endl;
	}
	arquivo.close();
}
void abrir_arquivo_da_matriz2(int vetor[10][10])
{
	ifstream arquivo;
	arquivo.open("Matriz2.txt");
	if (arquivo.is_open())
	{

		for(int i = 0; i < 10; i++)
		{
			for(int j = 0; j < 10; j++)
			{
				arquivo >>	vetor[i][j];

			}

		}

	}
	else
	{

		cout << "Não foi possivel abrir o arquivo" << endl;
	}
	arquivo.close();
}

int main(int argc, char** argv)
{
	string a;
	int limite;
	int vetorA[10][10], vetorB[10][10], soma[10][10];
	cout<<"====================================================================";
	cout << "\nEsse programinha imprime na tela a soma de duas matrizes 10x10" << endl;

	cout << "O sistema gera um arquivo com matrizes aletorias" << endl;
	cout << "\n";
	cout<<"====================================================================";


	cout << "\nDeseja gerar 2 novos arquivos com matrizes?[sim/nao]" << endl;
	cin >> a;
	if(a == "sim")
	{
		cout << "Primeira Matriz: " << endl;
		cout << "Digite o valor maximo que o numero pode assumir na matriz: ";
		cin >> limite;

		gerar_Matriz1(vetorA, limite);
		cout << "\nsegunda Matriz: " << endl;
		cout << "Digite o valor maximo que o numero pode assumir na matriz: ";
		cin >> limite;
		gerar_Matriz2(vetorB, limite);

	}
	abrir_arquivo_da_matriz1(vetorA);
	abrir_arquivo_da_matriz2(vetorB);
	cout<<"===================================================================="<<endl;
	somar_matrizes(vetorA, vetorB, soma);
	mostrarMatriz(soma);




	return 0;


}



