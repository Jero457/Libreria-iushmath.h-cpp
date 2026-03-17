#include <iostream>
#include <iomanip>
#include "IUSHmath.h";
using namespace std;

int main() {
	cout << setprecision(2) << fixed;
	double n1 = 2.5, n2 = -5.0;
	double n3 = 10, n4 = 5;
	cout << "Suma       " << n1 << " + " << n2 << " = " << Sum(n1, n2) << endl;
	cout << "Diferencia " << n1 << " - " << n2 << " = " << Dif(n1, n2) << endl;
	cout << "Producto   " << n1 << " * " << n2 << " = " << Pro(n1, n2) << endl;
	cout << "Cociente   " << n1 << " / " << n2 << " = " << Coc(n1, n2) << endl;
	cout << "Valor Absoluto " << n1 << " = " << Vabs(n1) << endl;
	cout << "Valor Absoluto " << n2 << " = " << Vabs(n2) << endl;
	cout << "Mayor entre " << n1 << " y " << n2 << ": " << May(n1, n2) << endl;
	cout << "Menor entre " << n3 << " y " << n4 << ": " << Men(n3, n4) << endl;
	cout << n3 << " elevado a " << n4 << ": " << Pot(n3, n4) << endl;
	cout << "Raiz 5 de " << 32 << ": " << Rzn(32, n4) << endl;
	if(Primo(11))
		cout << "7 es primo" << endl;
	else
		cout << "7 no es primo" << endl;

	//9
	cout << "La raiz cuadrada de " << n3 << " es: " << Rzcd(n3) << endl;
	//10
	cout << "Raiz cubica de 27: " << Rzcb(27) << endl;
	//Fibonacci
	cout << "El termino " << n3 << " de la serie de Fibonacci es: " << Fibonacci(n3) << endl;
	//Lucas
	 cout << "El termino " << n3 << " de la serie de Lucas es: " << Lucas(2) << endl;
	 //Triangular
	 cout << "El numero triangular de " << n3 << " es: " << Triangular(n3) << endl;
	 //MCM
	 cout << "MCM entre 12 y 18: " << Mcm(12, 18) << endl;

	 return 0;
	 
}