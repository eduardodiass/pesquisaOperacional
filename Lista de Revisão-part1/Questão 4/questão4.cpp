#include <iostream>

using namespace std;

int media_aritmetica(int vetor);
int main(int argc, char** argv)
{
	int vetor[10];
	setlocale(LC_ALL, "portuguese");

	cout << "Digite 10 números:" << endl;
	for(int i = 0; i < 10; i++)
	{
		cin >> vetor[i];
	}
	int maior, menor, media, soma;
	maior = vetor[0];
	for(int i = 0; i < 10; i++)
	{
		if(vetor[i] > maior)
		{
			maior = vetor[i];
		}
		if(vetor[i] < menor)
		{
			menor = vetor[i];
		}
		soma = vetor[i] + soma;

	}
	media = soma / 10;
	cout << "O maior valor é: " << maior << endl;
	cout << "O menor valor é: " << menor << endl;
	cout << "A média aritmérica é: " << media << endl;
	return 0;
}


