#include <iostream>
#include <math.h>
#include "complex.h"

using namespace std;

Complex y(const Complex& z); //пользовательская функция

int main()
{
	setlocale(LC_ALL, "RUS");
	
	Complex ex1(20, -2);
	Complex ex2 = 1;
	Complex ex3;
	Complex ex4 (5, 30);

	cout << "ex1 = " << ex1 << endl;
	cout << "ex2 = " << ex2 << endl;
	cout << "ex3 = " << ex3 << endl;
	cout << endl;

	ex3 = ex1 + ex2;
	ex1 /= ex3;
	ex2 *= ex3;

	cout << "ex3 = ex1 + ex2 = " << ex3 << endl;
	cout << "ex1 = ex1 / ex3 = " << ex1 << endl;
	cout << "ex2 = ex2 * ex3 = " << ex2 << endl;
	cout << endl;

	cout << "Введите дейтсвительную и мнимую части комплексного числа:" << endl;
	cin >> ex3;
	cout << "ex3 = " << ex3 << endl;
	cout << y(ex4) << endl;
}

Complex y(const Complex &z)
{
	return z + 3 - sinh(z) / 2;
}