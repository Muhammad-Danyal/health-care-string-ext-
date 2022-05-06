#include<iostream>
#include<string>

using namespace std;

int main() {

	cout << "welcome to Health Care\n";

	int num, age, cnic;
	string name, fatherName, sex, address, email, password;
	char choose;
	string qualification, experience, specilization;

	cout << " 1. Login \n";
	cout << " 2. Register \n\n";
	cout << " Press '1' for Login and '2' for Register \n ";
	cin >> num;

	if (num == 1) {
		cout << "      Welcome to Login Page \n\n\n ";
		cout << "      Enter your Email \n";
		getline(cin, email);

		cout << "	   Enter your Password\n";
		getline(cin, password);

	}
	else if (num == 2) {
		cout << "				Register your Account\n\n\n";

		cout << "   P. Register as Patient\n";
		cout << "   D. Register as Doctor\n";
		cout << "  select 'P' for Register as patient and select 'D' for Register as Doctor\n";
		cin >> choose;

		if (choose == 'P') {
			cout << "      Register as Patient\n\n";

			cout << "		    Enter your Full Name\n";
			getline(cin, name);

			cout << "			Enter your Father Name\n";
			getline(cin, fatherName);

			cout << "			Enter your Age\n";
			cin >> age;

			cout << "			Enter your Sex\n";
			cin >> sex;

			cout << "			Enter your CNIC\n";
			cin >> cnic;

			cout << "			Enter your Address\n";
			getline(cin, address);

			cout << "		Congratulations your Account is Created Sucessful\n";
		}
		else if (choose == 'D') {
			cout << "   Register as Doctor\n\n";

			cout << "		    Enter your Full Name\n";
			getline(cin, name);
			cout << "			Enter your Father Name\n";
			getline(cin, fatherName);
			cout << "			Enter your Age\n";
			cin >> age;
			cout << "			Enter your Sex\n";
			cin >> sex;
			cout << "			Enter your CNIC\n";
			cin >> cnic;
			cout << "			Enter your Address\n";
			getline(cin, address);
			cout << "			Enter your Qualification\n";
			getline(cin, qualification);
			cout << "		    Enter your Specilization\n";
			getline(cin, specilization);
			cout << "			Enter your Experience\n";
			getline(cin, experience);

			cout << "		Congratulations your Account is Created Sucessful\n";

		}
	}
	return 0;
}

