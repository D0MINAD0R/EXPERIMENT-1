#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int netBalance;
	int payment;
	int d1;
	int d2;

	cout << "Enter net balance: ";
	cin >> netBalance;
	cout << "Net Balance: " << netBalance << ".Php\n";

	cout << "How much is your payment: ";
	cin >> payment;
	cout << "Payment: " << payment << ".Php\n";

	cout << "How many days is your billing cycle: ";
	cin >> d1;
	cout << "Billing cycle days: " << d1 << endl;

	cout << "How many days till your billing cycle: ";
	cin >> d2;
	cout << "Billing cycle days left: " << d2 << endl;

	cout << "averageDailyBalance = " << (netBalance*d1 - payment*d2)/d1 << endl;
	cout << "interest = " << ((netBalance*d1 - payment*d2)/d1) * 0.0097;

	getch();
	return 0;
}