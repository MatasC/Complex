#include"Complex.h"
int main()
{
	Complex a;
	cout << "Iveskite pradines reiksmes. Is pradziu iveskite real, tuomet imaginary: " << endl;
	cin >> a;
	char pasirinkimas;
	bool pabaiga = 0;
	while (!pabaiga)
	{
		cout << "Iveskite norimo atlikti veiksmo simboli." << endl << "Galimi simboliai: +, *, -" << endl;
		pasirinkimas = Ivestis_kr(pasirinkimas);
		switch (pasirinkimas)
		{
		case '+':
		{
			cout << "Iveskite kiek norite prideti prie real, o kiek prie imaginary: ";
			Complex b;
			cin >> b;
			a += b;
			cout << "Rezultatas yra " << a << endl;
			char x = 's';
			cout << "Ar norite atlikti nauja skaiciavima (y), ar norite baigti darba (n): ";
			while (x != 'y')
			{
				if (x == 'n')
					break;
				cout << "Neteisingas kriterijus. Bandykite dar karta." << endl;
				cin >> x;
			}
			if (x == 'n')
				pabaiga = 1;
			break;
		}
		case '*':
		{
			cout << "Iveskite is kiek padauginti real, o is kiek imaginary: ";
			Complex b;
			cin >> b;
			a *= b;
			cout << "Rezultatas yra " << a << endl;
			char x = 's';
			cout << "Ar norite atlikti nauja skaiciavima (y), ar norite baigti darba (n): ";
			cin >> x;
			while (x != 'y')
			{
				if (x == 'n')
					break;
				cout << "Neteisingas kriterijus. Bandykite dar karta." << endl;
				cin >> x;
			}
			if (x == 'n')
				pabaiga = 1;
			break;
		}
		case '-':
		{
			cout << "Iveskite kiek norite atimti is real, o kiek is imaginary: ";
			Complex b;
			cin >> b;
			a += b;
			cout << "Rezultatas yra " << a << endl;
			char x = 's';
			cout << "Ar norite atlikti nauja skaiciavima (y), ar norite baigti darba (n): ";
			while (x != 'y')
			{
				if (x == 'n')
					break;
				cout << "Neteisingas kriterijus. Bandykite dar karta." << endl;
				cin >> x;
			}
			if (x == 'n')
				pabaiga = 1;
			break;
		}
		}
	}
}