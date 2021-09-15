#include <iostream>

using namespace std;


class prostokat {
	public:
		float bok1;
		float bok2;
		
		float obwod() 
		{	
		return bok1*2 + bok2*2;	
		}
		
		float powierzchnia() 
		{	
		return bok1*bok2;	
		}
		
		void tekst(float obwod, float powierzchnia) 
		{
			cout << "Obwód prostok¹ta wynosi " << obwod << " a jego pole powierzchni jest równe " << powierzchnia << endl;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Polish");
	
	float boknr1;
	float boknr2;
	
	cout << "podaj d³ugoœæ boku numer 1" << endl;
	cin >> boknr1;
	
	cout << "podaj d³ugoœæ boku numer 2" << endl;
	cin >> boknr2;
	
	prostokat obiekt;
	
	obiekt.bok1 = boknr1;
	obiekt.bok2 = boknr2;
	
	obiekt.tekst(obiekt.obwod(), obiekt.powierzchnia());
	
	return 0;
}
