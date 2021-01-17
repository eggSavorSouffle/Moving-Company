#include <iostream>
#include <string>
using namespace std;

class info {
private:
	string address, firstName, lastName, email;
	long double creditCard, phoneNum;
public:

	//Constructor 
	info(string add, string fn, string ln, string e, long double cc, long double pn) {
		address = add;
		firstName = fn;
		lastName = ln;
		email = e;
		creditCard = cc;
		phoneNum = pn;

	}

	void Movers() {
		int a = 0;
		cout << "How many movers would you need? ";
		cin >> a;
		int amountMov = 0;
		amountMov = a;

		if (a < 0 || a >= 11) {
			cout << "Error. We do not have that amount of movers available... Enter again. " << endl;
			Movers();
		}
		else {
			cout << "You selected " << amountMov << " movers for the job. "<< endl;
		}
	}

	void services() {
		string option, choice;
		
		cout << "Which services would you like " << firstName << " ? : " << endl;
		cout << " a) Materials\n b) Storage\n c) Trucks " << endl;
		cin >> option;

		cout << "You have selected";

		if (option == "a")
			cout << " materials" << endl;
		else if (option == "b")
			cout << " storage" << endl;
		else if (option == "c")
			cout << " trucks" << endl;
		else {
			cout << "Error. Select a valid option.";
			services();
		}

		cout << "Would you like any of the other services ? " << endl;
		cin >> choice;

		if (choice == "Yes" || choice == "yes") {
			cout << " a) Storage\n b) Trucks " << endl;
			if (option == "a") {
				cout << " ";
				cin >> option;
				cout << "You have selected";
				if (option == "a")
					cout << " storage" << endl;
				else if (option == "b")
					cout << " trucks" << endl;
				else
					cout << "Invalid option" << endl;
			}

			else if (option == "b") {
				cout << " a) Materials\n b) Trucks " << endl;
				cin >> option;
				cout << "You have selected";
				if (option == "a")
					cout << " materials" << endl;
				else if (option == "b")
					cout << " trucks" << endl;
				else
					cout << "Invalid option" << endl;
			}

			else
				cout << " a) Materials\n b) Storage " << endl;
			cin >> option;
			cout << "You have selected";
			if (option == "a")
				cout << " materials" << endl;
			else if (option == "b")
				cout << " storage" << endl;
			else
				cout << "Invalid option" << endl;
		}

		
	}
	
};