#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;
double y(const double x);

int main()
{
	double fp, fk, z;
	int n;
	cout << "fp = "; cin >> fp;
	cout << "fk = "; cin >> fk;
	cout << "n = "; cin >> n;
	cout << "-----------------------------------------" << endl;
	cout << "|" << setw(5) << "z" << "   |"
		<< setw(10) << "n" << " |"
		<< endl;
	cout << "-----------------------------------------" << endl;
	double df = (fk - fp) / n;
	double f = fp;

	while (f <= fk)
	{
		z = y(f / 2) + pow(y(f + 1), 2) + y(2 * f);
		cout << "|" << setw(7) << z << "   |"
			<< setw(10) << f << " |"
			<< endl;
		f += df;
	}
	return 0;
}

double y(const double x)
{

	if (abs(x) >= 1)
		return ((exp(x)) / (1 + exp(x) + sin(x)));
	else
	{

		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = -x * x / ((2 * j - 1) * 2 * j);
			S += a;
		} while (j < 8);
		return S;
	}
}