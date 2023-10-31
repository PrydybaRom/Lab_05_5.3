
#include <iostream>
#include <cmath>
using namespace std;
double r(const double x);
int main()
{
	double gp, gk, z;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n = "; cin >> n;
	double dg = (gk - gp) / n;
	double h = gp;
	while (h <= gk)
	{
		z = r(1 + (h * h) - 2 * h) + 2 * r(1 + r(h * h) - 2 * pow(r(1), 2));
		cout << h << " " << z << endl;
		h += dg;
	}
	return 0;
}

double r(const double x)
{
	if (abs(x) >= 1)
		return (1 - pow(sin(x), 2) / (exp(x) ));
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = pow(x, j+1) / ((2 * j + 1) - 6  * (2 * j + 1) - 5 * (2 * j + 1) - 4 * (2 * j + 1) - 3 * (2 * j + 1) - 2 * (2 * j + 1) - 1 * (2 * j + 1));
			a *= R;
			S += a;
		} while (j < 7);
		return (1.0 / 1+x) * S;
	}
}





