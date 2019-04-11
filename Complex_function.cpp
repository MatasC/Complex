#include"Complex.h"
Complex operator+(Complex& a, Complex& b)
{
	return a += b;
}

/*Complex operator-(Complex& a, Complex& b)
{
	return a -= b;
}*/

Complex operator*(Complex& a, Complex& b)
{
	return a *= b;
}

std::ostream& operator<<(std::ostream& out, const Complex &a)
{
	if (a.Get_imag() < 0)
		out << a.Get_real() << a.Get_imag() << std::endl;
	else
		out << a.Get_real() << "+" << a.Get_imag() << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Complex &a)
{
	double x;
	in >> x;
	a.Give_real(x);
	in >> x;
	a.Give_imag(x);
	return in;
}

char Ivestis_kr(char pasirinkimas)
{
	cin >> pasirinkimas;
	while (pasirinkimas != '+')
	{
		if (pasirinkimas == '-' || pasirinkimas == '*')
			break;
		cout << "Neteisingas kriterijus. Bandykite dar karta." << endl;
		cin >> pasirinkimas;
	}
	return pasirinkimas;
}
