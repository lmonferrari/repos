#include "stdafx.h"
#include<iostream>
#include<cmath>

using namespace std;

float f(float);

int main()
{
	cout.precision(6); // definindo precisão
	cout << fixed;

	float xa = 0, xb = 0; // intervalos
	float h = 0, soma = 0;
	float y[20];
	int n = 0;

	cout << "Entre com o valor de xa" << endl;
	cin >> xa;
	cout << "Entre com o valor de xb" << endl;
	cin >> xb;
	cout << "Entre com h" << endl;
	cin >> h;

	cout << "x de " << xa << " ate " << xb << endl;

	n = (xb - xa) / h;

	// se n não for par
	if (n % 2 != 0)
		n += 1;

	h = (xb - xa) / n;

	//guardando valores da função
	for (int i = 0; i <= n; i++)
		y[i] = f(xa + i * h);

	//imprimindo valores de y
	cout << "Valores de y:" << endl;
	for (int i = 0; i <= n; i++)
		cout << y[i] << endl;

	//separando pares e impares
	for (int i = 1; i < n; i++) {
		if (i % 2 == 1)
			soma += 4 * y[i];
		else
			soma += 2 * y[i];
	}

	//imprimindo resultado
	cout << h / 3 * (y[0] + y[n] + soma) << endl;

	return 0;
}

// função exponencial 
float f(float x) {
	return exp(x);
}
