#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include <string.h>
#include "User.h"
using namespace std;
#ifndef PERSON_H
#define PERSON_H

struct Person_structure {
	User_structure u1;
	string dateOfBirth;
	string gender;
	string leisureActivity;
	string jobTitle;
	string companyName;
	string skills;
	string schooleducation;
	string collegeEducation;
	string graduation;
	string masters;
	string phd;
	string jobExperience;
};

class Person :public User {
private:
	struct Person_structure p1;
public:
	Person() {
	}

	//setters and getters of data structure

	void set_dateOfBirth(const string dob) {
		p1.dateOfBirth = dob;
	}
	string get_dateOfBirth() const {
		return p1.dateOfBirth;
	}

	void set_gender(const string gender) {
		this->p1.gender = gender;
	}
	string get_gender()const {
		return p1.gender;
	}

	void set_leisureactivity(const string leisureactivity) {
		p1.leisureActivity = leisureactivity;
	}
	string get_leisureactivity()const {
		return p1.leisureActivity;
	}

	void set_jobTitle(const string jobTitle) {
		this->p1.jobTitle = jobTitle;
	}
	string get_jobTitle()const {
		return p1.jobTitle;
	}

	void set_companyName(const string companyName) {
		this->p1.companyName = companyName;
	}
	string get_companyName()const {
		return p1.companyName;
	}

	//setters and getters of education structure
	void set_schoolEDucation(const string schoolEducation) {
		p1.schooleducation = schoolEducation;
	}
	string get_schoolEDucation()const {
		return p1.collegeEducation;
	}
	void set_collegeEDucation(const string collegeEducation) {
		this->p1.collegeEducation = collegeEducation;
	}
	string get_collegeEDucation()const {
		return p1.collegeEducation;
	}

	void set_graduation(const string graduation) {
		this->p1.graduation = graduation;
	}
	string get_graduation()const {
		return p1.graduation;
	}

	void set_masters(const string masters) {
		this->p1.masters = masters;
	}
	string get_masters()const {
		return p1.masters;
	}

	void set_phd(const string phd) {
		this->p1.phd = phd;
	}
	string get_phd()const {
		return p1.phd;
	}

	void set_jobExperience(const string jobexperience) {
		this->p1.jobExperience = jobexperience;
	}
	string get_jobExperience()const {
		return p1.jobExperience;
	}


	//setters and getters others
	void set_skills(const string skills) {
		this->p1.skills = skills;
	}
	string get_skills()const {
		return p1.skills;
	}
	

	void editProfile() {
		int ans;
		string dob, gen, lA, jT, compName, s, schEdu, colEdu, grad, mas, p, jE, nam, abt, BIO, cty, cntry, ind, e;
		int contact;
		do {
			cout << "1-date Of Birth\n2-gender\n3-leisure Activity\n4-job Title\n5-company Name\n6-skills" << endl;
			cout << "7-school education\n8-college Education\n9-graduation\n10-masters\n11-phd\n12-job Experience" << endl;
			cout << "13-name\n14-about\n15-Biograpgy\n16-city\n17-country\n18-industry\n19-contact no\n20-email\n-1 exit" << endl;
			cin >> ans;
			switch (ans) {
			case 1:
				//		string dob;
				cin >> dob;
				set_dateOfBirth(dob);
				break;
			case 2:
				//		string gen;
				cin >> gen;
				set_gender(gen);
				break;
			case 3:
				//		string lA;
				cin >> lA;
				set_leisureactivity(lA);
				break;
			case 4:
				//	string jT;
				cin >> jT;
				set_jobTitle(jT);
				break;
			case 5:
				///	string compName;
				cin >> compName;
				set_companyName(compName);
				break;
			case 6:
				//	string skills;
				cin >> s;
				set_skills(s);
				break;
			case 7:
				//	string schEdu;
				cin >> schEdu;
				set_schoolEDucation(schEdu);
				break;
			case 8:
				//	string colEdu;
				cin >> colEdu;
				set_collegeEDucation(colEdu);
				break;
			case 9:
				//	string grad;
				cin >> grad;
				set_graduation(grad);
				break;
			case 10:
				//	string mas;
				cin >> mas;
				set_masters(mas);
				break;
			case 11:
				//	string p;
				cin >> p;
				set_phd(p);
				break;
			case 12:
				//string jE;
				cin >> jE;
				set_jobExperience(jE);
				break;
			case 13:
				//string nam;
				cin >> nam;
				set_name(nam);
				break;
			case 14:
				//string abt;
				cin >> abt;
				set_about(abt);
				break;
			case 15:
				//string BIO;
				cin >> BIO;
				set_shortBio(BIO);
				break;
			case 16:
				//string cty;
				cin >> cty;
				set_city(cty);
				break;
			case 17:
				//string cntry;
				cin >> cntry;
				set_country(cntry);
				break;
			case 18:
				//string ind;
				cin >> ind;
				set_industry(ind);
				break;
			case 19:
				//string contact;
				cin >> contact;
				set_contactnumber(contact);
				break;
			case 20:
				//string email;
				cin >> e;
				set_email(e);
				break;
			case -1:
				exit(1);
				break;
			default:
				cout << "invalid option!" << endl;
			}
		} while (ans != -1);
	}

	void viewProfile() {
		cout << "Name: " << get_name() << endl;
		cout << "ID : " << get_ID()<<endl;
		cout << "About: " << get_about() << endl;
		cout << "Bio: " << get_shortBio() << endl;
		cout << "City: " << get_city() << endl;
		cout << "Country: " << get_country() << endl;
		cout << "Industry: " << get_industry() << endl;
		cout << "Contact Number: " << get_contactnumber() << endl;
		cout << "Email: " << get_email() << endl;
		cout << "Date of Birth: " << get_dateOfBirth() << endl;
		cout << "Gender: " << get_gender() << endl;
		cout << "Extra-curriculars: " << get_leisureactivity() << endl;
		cout << "Job: " << get_jobTitle() << endl;
		cout << "Job Experience: " << get_jobExperience() << endl;
		cout << "Company: " << get_companyName() << endl;
		cout << "Skills: " << get_skills() << endl;
		cout << "School: " << get_schoolEDucation() << endl;
		cout << "College: " << get_collegeEDucation() << endl;
		cout << "Graduation: " << get_graduation() << endl;
		cout << "Masters: " << get_masters() << endl;
		cout << "Ph.D: " << get_phd() << endl;

	}
	//Filing functions -> this function will create a file for all persons in linkedIN
	void Add_to_file() {
		ofstream write;
		write.open("All_Persons.txt", ios::binary | ios::app);
		write << "Name : " << get_name() << endl;
		write <<get_ID()<<endl;
		write << "About : " << get_about() << endl;
		write << "Bio : " << get_shortBio() << endl;
		write << "Short Bio : " << get_shortBio() << endl;
		write << "City : " << get_city() << endl;
		write << "Country : " << get_country() << endl;
		write << "Industry : " << get_industry() << endl;
		write << "Contact Number : " << get_contactnumber() << endl;
		write << "Email : " << get_email() << endl;
		write << "Date of Birth : " << get_dateOfBirth() << endl;
		write << "Gender : " << get_gender() << endl;
		write << "Extra-curriculars : " << get_leisureactivity() << endl;
		write << "Job title : " << get_jobTitle() << endl;
		write << "Job Experience : " << get_jobExperience() << endl;
		write << "Company : " << get_companyName() << endl;
		write << "Skills : " << get_skills() << endl;
		write << "School : " << get_schoolEDucation() << endl;
		write << "College : " << get_collegeEDucation() << endl;
		write << "Graduation : " << get_graduation() << endl;
		write << "Masters : " << get_masters() << endl;
		write << "Ph.D : " << get_phd() << endl;
		write << "Leisure activity : " << get_leisureactivity() << endl;
		//Similar to the above work, we will write every attribute into file , or only those that are of our need
		write.close();
		cout << "Data Saved to file\n";
	}
	//This function will read all data added into All persons file   
	void Read_from_file() {
		ifstream read;
		read.open("All_Persons.txt");
		//getline(read, p1.u1.name);
		while (!read.eof()) {
			getline(read, p1.u1.name);
			cout << p1.u1.name << endl;

		}
		read.close();
	}
	void search_for_person_in_all_persons_file() {
		cout << "Enter name to search\n";
		string s;
		cin >> s;
		s = "Name : " + s;
		ifstream read;
		read.open("All_Persons.txt");
		getline(read, p1.u1.name);
		while (!read.eof()) {
			if (p1.u1.name == s) {
				cout << p1.u1.name << endl;
				break;
			}
			getline(read, p1.u1.name);
		}
		read.close();
	}
	void make_connection() {
		//filhal we are working on names , later if needed we can also introduce unique ids
		Person temp;
		int flag = 0;
		ofstream write_connection;
		//cout<<get_ID()<<endl;
		string file_name = get_ID() + "_connections.txt";
		string search;
		cout << "Enter a name to search to make connection\n";
		getline(cin,search);
		search = "Name : " + search;
		ifstream read_all_persons;
		ifstream read_connections;
		read_connections.open(file_name);
		if (!read_connections.is_open()) {
			cout << "connection file is going to be created nowt\n";
		}
		else {
			cout << "file exisits , now it will be appended\n";
			getline(read_connections, p1.u1.name);
			while (!read_connections.eof()) {
				if (search == p1.u1.name) {
					cout << "Demanded person is already in your connections list\n";
					flag = 1;
					break;
				}
				getline(read_connections, p1.u1.name);

			}
		}
		read_connections.close();
		write_connection.open(file_name, ios::binary | ios::app);
		if (flag == 0) {
			read_all_persons.open("All_Persons.txt");
			
			while (!read_all_persons.eof()) {
			//getline(read_all_persons, p1.u1.name);
				if (search == p1.u1.name) {
					cout << "Writing to connections file\n";		

					//getline(read_all_persons, p1.u1.name);
					write_connection << p1.u1.name << endl;
					getline(read_all_persons, p1.u1.ID);
					write_connection << p1.u1.ID << endl;						
					getline(read_all_persons, p1.u1.about);
					write_connection << p1.u1.about << endl;
					getline(read_all_persons, p1.u1.shortBoi);
					write_connection << p1.u1.shortBoi << endl;
					getline(read_all_persons, p1.u1.city);
					write_connection << p1.u1.city << endl;
					getline(read_all_persons, p1.u1.country);
					write_connection << p1.u1.country << endl;
					getline(read_all_persons, p1.u1.industry);
					write_connection << p1.u1.industry << endl;
					getline(read_all_persons, p1.u1.contactnumber);
					write_connection << p1.u1.contactnumber << endl;
					getline(read_all_persons, p1.u1.email);
					write_connection << p1.u1.email << endl;
					getline(read_all_persons, p1.dateOfBirth);
					write_connection << p1.dateOfBirth << endl;
					getline(read_all_persons, p1.gender);
					write_connection << p1.gender << endl;
					getline(read_all_persons, p1.leisureActivity);
					write_connection << p1.leisureActivity << endl;
					getline(read_all_persons, p1.jobTitle);
					write_connection << p1.jobTitle << endl;
					getline(read_all_persons, p1.jobExperience);
					write_connection << p1.jobExperience << endl;
					getline(read_all_persons, p1.companyName);
					write_connection << p1.companyName << endl;
					getline(read_all_persons, p1.skills);
					write_connection << p1.skills << endl;
					getline(read_all_persons, p1.schooleducation);
					write_connection << p1.schooleducation << endl;
					getline(read_all_persons, p1.collegeEducation);
					write_connection << p1.collegeEducation << endl;
					getline(read_all_persons, p1.graduation);
					write_connection << p1.graduation << endl;
					getline(read_all_persons, p1.masters);
					write_connection << p1.masters << endl;
					getline(read_all_persons, p1.phd);
					write_connection << p1.phd << endl;
					getline(read_all_persons, p1.u1.name);
				}
				else {
                    cout<<"herer\n";
					getline(read_all_persons, p1.u1.name);
				}
				//getline(read_all_persons, p1.u1.name);
			}
			write_connection.close();
		}
	}
	void show_connection() {
		ifstream read;
		string file_name = get_ID() + "_connections.txt";
		read.open(file_name);
		getline(read, p1.u1.name);
		getline(read, p1.u1.shortBoi);
		while (!read.eof()) {
			cout << p1.u1.name << endl;
			cout << p1.u1.shortBoi << endl;
			getline(read, p1.u1.name);
			getline(read, p1.u1.shortBoi);
		}
		read.close();
	}
	void post_on_my_wall(){
		 cout<<"Enter the text block you want to post\n";
		 getline(cin,p1.u1.post);
		 string final_post="Post : " + p1.u1.post;
		 string file_name = get_ID() + "_posts.txt";
		 ofstream write_post;
		 write_post.open(file_name, ios::binary | ios::app);
		 write_post<<final_post<<endl;
		 cout<<"post written successfully\n";
		 write_post.close();
	}
    void view_my_wall(){
		ifstream read_wall;
		string file_name = get_ID() + "_posts.txt";
		read_wall.open(file_name);
		if(!read_wall.is_open()){
			cout<<"no posts yet\n";
		}
		else{
			getline(read_wall,p1.u1.ID);
			while (!read_wall.eof())
			{
			cout<<p1.u1.ID<<endl;
			getline(read_wall,p1.u1.ID);
			}
			read_wall.close();
		}
	}
	void view_my_newsfeed(){
		int post_count=0;
		int flag_file=0;
		string file_name1=get_ID() + "_connections.txt";
		ifstream read_connections;
		ifstream read_connections_post;
		read_connections.open(file_name1);
		if(!read_connections.is_open()){
			cout<<"Can't view your newsfeed cuz your dont have any connections\n";
		}
		else{
		while(!read_connections.eof()){
			getline(read_connections,p1.u1.ID);
			string file_name2=p1.u1.ID + "_posts.txt";
			//cout<<file_name2<<endl;
			read_connections_post.open(file_name2);
			if(!read_connections_post.is_open()){
				//cout<<"cant open file cuz its not ID\n";
				flag_file=0;
			}
			else{
				flag_file=1;
			}
			if(flag_file==1){
				
				while(!read_connections_post.eof()){
					if(post_count>5){
						break;
					}
					getline(read_connections_post,p1.u1.post);
					//cout<<p1.u1.post.size();
					if(p1.u1.post.size()>0){
					cout<<"Post by ID : "<<p1.u1.ID<<"\t";
					cout<<p1.u1.post<<endl;
					post_count++;
					//getline(read_connections_post,p1.u1.post);
					//break;
					}
				}
			}
			else{
				//cout<<"flag_file is 0\n";
			}
			read_connections_post.close();

		}
		
		}
	}
};

#endif

