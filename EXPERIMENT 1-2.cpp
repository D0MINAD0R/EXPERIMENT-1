#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int mass;
	int volume;

	cout << "Enter a value for mass: ";
	cin >> mass;
	cout<< "Mass:" << mass << "g\n";

	cout << "Enter a value for density: ";
	cin >> volume;
	cout << "Volume: " << volume << "cm^3\n";

	cout << "Density = " << (mass/4)/volume ;

	getch();
	return 0;
}