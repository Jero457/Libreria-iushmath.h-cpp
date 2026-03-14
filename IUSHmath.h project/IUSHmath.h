double Sum(double, double);
double Dif(double, double);
double Pro(double, double);
double Coc(double, double);
double Vabs(double);
double May(double, double);
double Men(double, double);
double Pot(double, double);
double Rzn(double, int);


double Sum(double var1, double var2) {
	return var1 + var2;
}

double Dif(double var1, double var2) {
	return var1 - var2;
}

double Pro(double var1, double var2) {
	return var1 * var2;
}

double Coc(double var1, double var2) {
	return var1 / var2;
}

double Vabs(double var) {
	if (var < 0)
		return var * -1;
	return var;
}

double May(double var1, double var2) {
	if (var1 > var2)
		return var1;
	return var2;
}

double Men(double var1, double var2) {
	if (var1 < var2)
		return var1;
	return var2;
}

double Pot(double var1, double var2) {
	double rta = 1;
	for (int i = 1; i <= var2; i++)
	{
		rta *= var1;
	}
	return rta;
}

double Rzn(double var, int n) {
	double rta = 0;
	double paso = 0.0001;

	for (double i = 0; Pot(i, n) <= var; i += paso)
	{
		rta = i;
	}
	return rta;
}