#include <iostream>
#include <iomanip>
#include "IUSHmath.h";
using namespace std;

int main() {
	cout << setprecision(2) << fixed;
	double n1 = 2.5, n2 = -5.0;
	double n3 = 2, n4 = 5;
	cout << "Suma       " << n1 << " + " << n2 << " = " << Sum(n1, n2) << endl;
	cout << "Diferencia " << n1 << " - " << n2 << " = " << Dif(n1, n2) << endl;
	cout << "Producto   " << n1 << " * " << n2 << " = " << Pro(n1, n2) << endl;
	cout << "Cociente   " << n1 << " / " << n2 << " = " << Coc(n1, n2) << endl;
	cout << "Valor Absoluto " << n1 << " = " << Vabs(n1) << endl;
	cout << "Valor Absoluto " << n2 << " = " << Vabs(n2) << endl;
	cout << "Mayor entre " << n1 << " y " << n2 << ": " << May(n1, n2) << endl;
	cout << "Menor entre " << n3 << " y " << n4 << ": " << Men(n3, n4) << endl;
	cout << n3 << " elevado a " << n4 << ": " << Pot(n3, n4) << endl;
	if(Primo(11))
		cout << "7 es primo" << endl;
	else
		cout << "7 no es primo" << endl;
	return 0;
}