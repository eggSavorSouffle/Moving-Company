#include <iostream>
#include <string>
#include "info.h"
using namespace std;

int main() {

	/*Address
	  First Name
	  Last Name
	  Email
	  credit card 
	  phone number*/

	string a, b, c, d;
	long double e, f; 

	cout << "Enter your address: " << endl;
	getline(cin, a);

	cout << "Enter your first name: " << endl;
	cin >> b;

	cout << "Enter your last name: " << endl;
	cin >> c;

	cout << "Enter your E-mail: " << endl;
	cin >> d;

	cout << "Enter your credit card number: (No Spaces) " << endl;
	cin >> e;

	cout << "Enter your phone number : (No Spaces, Parenthesis, nor dashes) " << endl;
	cin >> f;

	cout << endl;

	info info(a, b, c, d, e, f);
	info.Movers();
	info.services();

	cout << a << endl << b << endl << c << endl << d << endl << e << endl << f << endl;

	return 0;
}