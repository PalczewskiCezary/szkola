#include <iostream>

using namespace std;

class School {
	public:
	static string s_school;
	static string s_jobPosition;
	
	string name;
	string surname;
	
	void getData();
	void setNameSurname(string name, string surname);
	
	static string s_getSchool();
	static void s_setSchool(string pschool){
		s_school=pschool;
	}
};

string School::s_school="CDV";
string School::s_jobPosition="student";

void School::getData(){
cout<<"imie i nazwisko: "<<name<<" "<<surname;
}
void School::setNameSurname(string name, string surname) {
	School::name=name;
	School::surname=surname;
}

string School::s_getSchool() {
	return s_school;
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	cout <<School::s_school<<endl;
	cout <<School::s_jobPosition<<endl;
	
	School kowal;
	kowal.setNameSurname("Janusz", "Kowal");
	kowal.getData();
	School::s_jobPosition="wyk³adowca";
	cout<<"\n"<<School::s_jobPosition<<endl;
	kowal.s_jobPosition="dziekan";
	cout<<"\n"<<School::s_jobPosition<<endl;
	
	cout<<School::s_getSchool()<<endl;
	School::s_setSchool("WSB");
	cout<<School::s_getSchool()<<endl;
	return 0;
}
