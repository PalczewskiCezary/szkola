#include <iostream>
using namespace std;
class student {
	public:
	static string s_class;
	static string s_profession;
	string name, surname;
	void showClassProfession() {
		cout<<"klasa: "<<s_class<<", "<<"zawód: "<<s_profession;
	}
	void setNameSurname(string name, string surname) {
		cout<<"imie i nazwisko: "<<name<<" "<<surname<<endl;
	}
};







int main(int argc, char** argv) {
	student adrian;
	adrian.setNameSurname("Adrian", "Lewandowski");
	adrian.showClassProfession("2PT", "Programista");
	return 0;
}

/*
zdefiniuj klase uczen zawierajaca dwie zmienne klasowe: s_klasa i s_zawod
w zmiennej s_klasa przypisz nazwe szkoly do ktorej uczeszczasz
w zmiennej s_zawod przypisz zawod w ktorym sie ksztalcisz
zdefiniuj zmienne instacyjne: imie i nazwisko
zdefiniuj klase stayczna wyswietlajaca zawod i klasa
zdefiniuj metode czlonkowska wyswietlajace i ustawiajace dane dla zmiennych czlonkowskich
*/
