#include "User.h"
#include "Person.h"
#include "Company.h"
#include<vector>
using namespace std;

//validation fuctions
bool isPasswordValid(string);
bool check_string(string s);
void sign_up_of_person();

int main() {

	//Functionalites 
	
	//sign_up_of_person();	
	//Company c1;
	//c1.input_Company_Data();
	//c1.Add_to_file();
	//c1.Read_from_file();
	//sign_up();
	//Person p1;
	//p1.set_name("Ali");
	//p1.Add_to_file();
	//p1.Read_from_file();
	// c1.set_name("Facebook");
	// c1.set_website("www.facebook.com");
	// c1.set_sectorType("IT");
	// c1.set_foundedDate("12-00-1000");
	// c1.Add_to_file();
	//c1.Read_from_file();
	//c1.search_for_company_in_all_company_file();
	//p1.search_for_person_in_all_persons_file();
	//Person p1;
	//p1.set_name("irtiza");
	//p1.set_ID("k224232");
	//p1.make_connection();
	//p1.Add_to_file();
   //p1.Read_from_file();
   //p1.search_for_person_in_all_persons_file();
   // p1.make_connection();
   //p1.viewProfile();
   //p1.show_connection();
	//p1.post_on_my_wall();
	//p1.view_my_wall();
	//p1.view_my_newsfeed();
	//p1.show_connection();
};

//checks the validity of password
bool isPasswordValid(string password) {
	// Password should be at least 8 characters long
	if (password.length() < 8) {
		return false;
	}

	// Check if password contains at least one uppercase letter, one lowercase letter and one digit
	bool hasUppercase = false;
	bool hasLowercase = false;
	bool hasDigit = false;

	for (int i = 0;i < password.length();i++) {
		if (isupper(password[i])) {
			hasUppercase = true;
		}
		else if (islower(password[i])) {
			hasLowercase = true;
		}
		else if (isdigit(password[i])) {
			hasDigit = true;
		}
	}

	if (!hasUppercase || !hasLowercase || !hasDigit) {
		return false;
	}

	return true;
}
//fuction to check string
bool check_string(string s) {
	bool check = false;
	for (int i = 0; i < s.length(); i++) {
		if (!isalpha(s[i])) {
			check = true;
		}
	}
	if (check == true) {
		return false;
	}
	return true;
}

//making sign up function our program will get started from here hopefully when a person selects sign up instead of log in
void sign_up_of_person() {
	//read ID from file "ID" then assign to user then write user's data in file then write incremented ID in file of "ID" 
	
	int IDint;
	string IDstring,email, password, first_name, last_name, country, city, jobTitle, company, industry;
	bool dot_present = false, rate_present = false;

	//reading  ID from file "ID.txt"
	ifstream read;
	read.open("ID.txt");
	if (!read.is_open()) {
		cout << "ID error\n";
	}
	else {
		cout << "Reading ID from file\n";
		read >> IDstring;
		cout << "ID:" << IDstring << endl;
	}
	read.close();

	//incrementing ID by typecasting into int
	IDint = stoi(IDstring);
	IDint++;
	IDstring = to_string(IDint);
	

	Person person;

	//ID of person has been set 
	person.set_ID(IDstring);

	do {

		cout << "Email:";
		cin >> email;
		for (int i = 0;i < email.length();i++) {
			if (email[i] == '@') {
				rate_present = true;
			}
			if (email[i] == '.') {
				dot_present = true;
			}
		}
		if (dot_present == false || rate_present == false) {
			cout << "invalid mail,enter again\n";
		}
	} while (dot_present == false || rate_present == false);
	person.set_email(email);


	do {
		cout << "Password(Password should be at least 8 characters long and contain at least one uppercase letter, one lowercase letter, and one digit.):";
		cin >> password;

		if (isPasswordValid(password) == false) {
			cout << "Invalid Format.Enter again.\n";
		}
	} while (isPasswordValid(password) == false);
	person.set_password(password);
	system("cls");

	do {
		cout << "Fist name:";
		cin >> first_name;
		if (check_string(first_name) == false) {
			cout << "Invalid character\n";
		}
	} while (check_string(first_name) == false);


	do {
		cout << "Last Name:";
		cin >> last_name;
		if (check_string(last_name) == false) {
			if (check_string(first_name) == false) {
				cout << "Invalid character\n";
			}
		}
	} while (check_string(last_name) == false);

	string fname = first_name + " " + last_name;
	person.set_name(fname);
	//person.set_
	system("cls");

	do {
		cout << "Country:";
		cin >> country;
		if (check_string(country) == false) {
			cout << "Invalid character\n";
		}
	} while (check_string(country) == false);
	person.set_country(country);

	do {
		cout << "City:";
		cin >> city;
		if (check_string(city) == false) {
			cout << "Invalid character\n";
		}
	} while (check_string(city) == false);
	person.set_city(city);
	system("cls");

	do {
		cout << "Most recent job title:";
		cin >> jobTitle;
		if (check_string(jobTitle) == false) {
			cout << "Invalid character\n";
		}
	} while (check_string(jobTitle) == false);
	person.set_jobTitle(jobTitle);

	do {
		cout << "Most recent company:";
		cin >> company;
		if (check_string(company) == false) {
			cout << "Invalid character\n";
		}
	} while (check_string(company) == false);
	person.set_companyName(company);

	do {
		cout << "Enter your industry:";
		cin >> industry;
		if (check_string(industry) == false) {
			cout << "Invalid character\n";
		}
	} while (check_string(industry) == false);
	person.set_industry(industry);

	//adding person to file
	person.Add_to_file();

	//writing incremented ID in file "ID"
	ofstream writeID;
	writeID.open("ID.txt");
	writeID << IDint;
	writeID.close();
}




//search funtionality
// -> a person can  