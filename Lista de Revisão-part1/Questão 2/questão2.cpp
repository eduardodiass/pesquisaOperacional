#include <iostream>

using namespace std;


int main(int argc, char** argv)
{
	int vetor[10];
	setlocale(LC_ALL, "portuguese");

	cout << "Digite 10 números:" << endl;
	for(int i = 0; i < 10; i++)
	{
		cin >> vetor[i];

	}

	cout << "Imprimir vetor: ";
	for(int j = 0; j < 10; j++)
	{
		cout << vetor[j] << " ";
	}


	return 0;
};
