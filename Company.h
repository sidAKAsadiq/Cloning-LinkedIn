// #include<iostream>
// #include<string>
// #include<fstream>
// #include<vector>
// #include <stdio.h>
// #include "User.h"
// using namespace std;
// #ifndef COMPANY_H
// #define COMPANY_H

// typedef struct Company_structur {
//         User_structure u1;
// 		string website;
// 		string sectorType;
// 		string foundedDate;
// }Company_structure;

// class Company :public User {
// private:
// Company_structure c1;
// public:
// 	//default constructor
// 	Company() {
//     c1.website="No input yet";
// 	c1.sectorType="No input yet";
//     c1.foundedDate="No input yet";
//     }
// 	//setters and getters
// 	void set_website(const string website) {
// 		this->c1.website = website;
// 	}
// 	string get_website()const {
// 		return this->c1.website;
// 	}
// 	void set_sectorType(const string sectorType) {
// 		this->c1.sectorType = sectorType;
// 	}
// 	string get_sectorType()const {
// 		return this->c1.sectorType;
// 	}
// 	void set_foundedDate(const string foundedDate) {
// 		this->c1.foundedDate = foundedDate;
// 	}
// 	string get_foundedDate()const {
// 		return this->c1.foundedDate;
// 	}
//     //Filing functions -> this function will create a file for all company in linkedIN
// 	void Add_to_file(){
// 		ofstream write;
// 		write.open("All_Companies.txt", ios::binary | ios::app);
// 		write<<"Name : "<<get_name()<<endl;
//         write<<"Website : "<<get_website()<<endl;
//         write<<"Sector type : "<<get_sectorType()<<endl;
//         write<<"Founded Date : "<<get_foundedDate()<<endl;
// 	    //Similar to the above work, we will write every attribute into file , or only those that are of our need
// 		write.close();
// 		cout<<"Data Saved to file\n";


// 	}
//      //This finction will read all data added into All company file   
//     void Read_from_file(){
//         ifstream read;	
// 		read.open("All_Companies.txt");
// 		getline(read,c1.u1.name);
// 		getline(read,c1.website);
// 		getline(read,c1.sectorType);
// 		getline(read,c1.foundedDate);
// 		while(!read.eof()){
// 		cout<<c1.u1.name<<endl;
//         cout<<c1.website<<endl;
//         cout<<c1.sectorType<<endl;
//         cout<<c1.foundedDate<<endl;
// 		getline(read,c1.u1.name);
// 		getline(read,c1.website);
// 		getline(read,c1.sectorType);
// 		getline(read,c1.foundedDate);
// 		}
// 		read.close();

//     }
//     void search_for_company_in_all_company_file(){
// 		int flag=0;
//         string s;
//         cout<<"enter name to search\n";
//         cin>>s;
//         s="Name : "+s;
//         ifstream read;	
// 		read.open("All_Companies.txt");
// 		getline(read,c1.u1.name);
// 		getline(read,c1.website);
// 		getline(read,c1.sectorType);
// 		getline(read,c1.foundedDate);
// 		while(!read.eof()){
//             if(c1.u1.name==s){
// 				flag=1;
// 		cout<<c1.u1.name<<endl;
//         cout<<c1.website<<endl;
//         cout<<c1.sectorType<<endl;
//         cout<<c1.foundedDate<<endl;
//         break;
//         }
//         else{
// 		getline(read,c1.u1.name);
// 		getline(read,c1.website);
// 		getline(read,c1.sectorType);
// 		getline(read,c1.foundedDate);
// 		}
// 		if(flag==0){
// 			cout<<"No such company exisit\n";
// 		}
//         }
// 		read.close();        

//     }   

// };
// #endif
#include<iostream>
#include<string>
#include<fstream>
#include <sstream>
#include<vector>
#include "User.h"
using namespace std;
#ifndef COMPANY_H
#define COMPANY_H

struct Company_structure {
	User_structure u1;
	string website;
	string sectorType;
	string foundedDate;
	string Company_id;
};

class Company :public User {
private:
	struct Company_structure c1;
public:
	//default constructor
	Company() {
		c1.website = "No input yet";
		c1.sectorType = "No input yet";
		c1.foundedDate = "No input yet";
		//ifstream read;

		//id=get from file and ++ in it and assign to company_id;
	}
	//setters and getters

	void set_website(const string website) {
		this->c1.website = website;
	}
	string get_website()const {
		return this->c1.website;
	}
	void set_sectorType(const string sectorType) {
		this->c1.sectorType = sectorType;
	}
	string get_sectorType()const {
		return this->c1.sectorType;
	}
	void set_foundedDate(const string foundedDate) {
		this->c1.foundedDate = foundedDate;
	}
	string get_foundedDate()const {
		return this->c1.foundedDate;
	}
	string get_Company_id() {
		return c1.Company_id;
	}
	//Filing functions -> this function will create a file for all company in linkedIN
	void Add_to_file() {
		ofstream write;
		write.open("All_Companies.txt", ios::binary | ios::app);
		write << "ID : " << get_Company_id() << endl;
		write << "Name : " << get_name() << endl;
		write << "About : " << get_about() << endl;
		write << "Short Bio : " << get_shortBio() << endl;
		write << "Website : " << get_website() << endl;
		write << "Sector type : " << get_sectorType() << endl;
		write << "Founded Date : " << get_foundedDate() << endl;
		write << "City : " << get_city() << endl;
		write << "Country : " << get_country() << endl;
		write << "Industry : " << get_industry() << endl;
		write << "Contact number : " << get_contactnumber() << endl;
		//write << "Email : " << get_email();

		//Similar to the above work, we will write every attribute into file , or only those that are of our need
		write.close();
		cout << "Data Saved to file\n";
	}
	//This finction will read all data added into All company file   
	void Read_from_file() {
		ifstream read;
		read.open("All_Companies.txt");
		//read>>c1.Company_id;
		getline(read, c1.Company_id);
		getline(read, c1.u1.name);
		getline(read, c1.u1.about);
		getline(read, c1.u1.shortBoi);
		getline(read, c1.website);
		getline(read, c1.sectorType);
		getline(read, c1.foundedDate);
		getline(read, c1.u1.city);
		getline(read, c1.u1.country);
		getline(read, c1.u1.industry);
		getline(read, c1.u1.contactnumber);
		//read>>c1.u1.contactnumber;
		while (!read.eof()) {
			cout << c1.Company_id << endl;
			cout << c1.u1.name << endl;
			cout << c1.u1.about << endl;
			cout << c1.u1.shortBoi << endl;
			cout << c1.website << endl;
			cout << c1.sectorType << endl;
			cout << c1.foundedDate << endl;
			cout << c1.u1.city << endl;
			cout << c1.u1.country << endl;
			cout << c1.u1.industry << endl;
			cout << c1.u1.contactnumber << endl;
			//read>>c1.Company_id;
			getline(read, c1.Company_id);
			getline(read, c1.u1.name);
			getline(read, c1.u1.about);
			getline(read, c1.u1.shortBoi);
			getline(read, c1.website);
			getline(read, c1.sectorType);
			getline(read, c1.foundedDate);
			getline(read, c1.u1.city);
			getline(read, c1.u1.country);
			getline(read, c1.u1.industry);
			getline(read, c1.u1.contactnumber);
			//read>>c1.u1.contactnumber;
		}
		read.close();
	}
	void search_for_company_in_all_company_file() {
		string ID;
		//string s;
		cout << "enter id to search\n";
		cin >> ID;
		//s = "Name : " + s;
		ifstream read;
		read.open("All_Companies.dat");
		read >> c1.Company_id;
		/*getline(read, c1.u1.name);
		getline(read, c1.website);
		getline(read, c1.sectorType);
		getline(read, c1.foundedDate);*/
		while (!read.eof()) {
			if (ID == c1.Company_id) {
				cout << "Company ID: " << c1.Company_id << endl;
				/*cout << c1.u1.name << endl;
				cout << c1.website << endl;
				cout << c1.sectorType << endl;
				cout << c1.foundedDate << endl;*/
				break;
			}
			else {
				read >> c1.Company_id;
				/*getline(read, c1.u1.name);
				getline(read, c1.website);
				getline(read, c1.sectorType);
				getline(read, c1.foundedDate);*/
			}
		}
		read.close();

	}
	void input_Company_Data() {
		cout << "id: "; cin >> c1.Company_id;
		cout << endl;
		cout << "Name : "; getline(cin, c1.u1.name);
		cout << endl;
		cout << "About : ";getline(cin, c1.u1.about);
		cout << endl;
		cout << "Short Bio : "; getline(cin, c1.u1.shortBoi);
		cout << endl;
		cout << "Website : "; getline(cin, c1.website);
		cout << endl;
		cout << "Sector type : "; getline(cin, c1.sectorType);
		cout << endl;
		cout << "Founded Date : "; getline(cin, c1.foundedDate);
		cout << endl;
		cout << "City : ";getline(cin, c1.u1.city);
		cout << endl;
		cout << "Country : ";getline(cin, c1.u1.country);
		cout << endl;
		cout << "Industry : "; getline(cin, c1.u1.industry);
		cout << endl;
		cout << "Contact number : ";cin >> c1.u1.contactnumber;
		//cout<<endl;
		/*cout << "Email : "; getline(cin,c1.u1.email);
		cout<<endl;*/
	}
};
#endif