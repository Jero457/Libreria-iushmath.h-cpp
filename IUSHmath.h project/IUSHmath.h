
double Sum(double, double);
double Dif(double, double);
double Pro(double, double);
double Coc(double, double);
double Vabs(double);
double May(double, double);
double Men(double, double);
double Pot(double, double);
double Rzn(double, int);
double Cub(double);
bool Primo(int);
int Sumatoria(int, int);


//1

double Sum(double var1, double var2) {
	return var1 + var2;
}

//2

double Dif(double var1, double var2) {
	return var1 - var2;
}

//3

double Pro(double var1, double var2) {
	return var1 * var2;
}

//4

double Coc(double var1, double var2) {
	return var1 / var2;
}

//5

double Vabs(double var) {
	if (var < 0)
		return var * -1;
	return var;
}

//6

double May(double var1, double var2) {
	if (var1 > var2)
		return var1;
	return var2;
}

//7

double Men(double var1, double var2) {
	if (var1 < var2)
		return var1;
	return var2;
}

//8

double Pot(double var1, double var2) {
	double rta = 1;
	for (int i = 1; i <= var2; i++)
	{
		rta *= var1;
	}
	return rta;
}


// 11
double Rzn(double var, int n) {
	double rta = 0;
	double paso = 0.0001;

	for (double i = 0; Pot(i, n) <= var; i += paso)
	{
		rta = i;
	}
	return rta;
}

//13

double Cub(double var) {
	return Pot(var, 3);
}

//16

int Sumatoria(int var1, int var2) {
	int sum = 0;
	if (var1 > var2) {
		int aux = var1;
		var1 = var2;
		var2 = aux;
	}
	for (int i = var1; i <= var2; i++)
	{
		sum += i;
	}
	return sum;
}

//18

bool Primo(int var){

	if (var / 2 != 1 || var / 3 != 1)
		return true;

	return false;
}