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
	//11
	cout << "La raiz " << n4 << " de " << n3 << " es: " << Rzn(n3, n4) << endl;
	//12
	cout << "El cuadrado de " << n3 << " es: " << Cua(n3) << endl;
	//13
	cout << "El cubo de " << n3 << " es: " << Cub(n3) << endl;
	//14
	cout << "2 elevado a 5: " << Potn(2, 5) << endl;
	//15
	cout << n3 << " es divisible por " << n4 << "? " << (Div(n3, n4) ? "Si" : "No") << endl;
	//16
	cout << "La sumatoria entre " << n4 << " y " << n3 << " es: " << Sumatoria(n4, n3) << endl;
	//17
	cout << "El factorial de " << n4 << " es: " << factorial(n4) << endl;
	//18
	cout << n3 << " es primo? " << (Primo(n3) ? "Si" : "No") << endl;
	//19
	cout << "5 y 10 son amigos? " << (Amigo(5, 10) ? "Si" : "No") << endl;
	//20
	cout << "28 es perfecto? " << (Perfecto(28) ? "Si" : "No") << endl;	
	//Fibonacci
	cout << "El termino " << n3 << " de la serie de Fibonacci es: " << Fibonacci(n3) << endl;
	//Lucas
	 cout << "El termino " << n3 << " de la serie de Lucas es: " << Lucas(2) << endl;
	 //Triangular
	 cout << "El numero triangular de " << n3 << " es: " << Triangular(n3) << endl;
	 //MCM
	 cout << "MCM entre 12 y 18: " << Mcm(12, 18) << endl;
	 //MCD
	 cout << "El Maximo Comun Divisor entre "<< n3 << " y " << n4<< " es: " << Mcd(n3, n4) << endl;

	 return 0;
	 
}