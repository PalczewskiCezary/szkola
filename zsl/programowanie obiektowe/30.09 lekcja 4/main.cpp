#include <iostream>

using namespace std;

class Rectangle {
	public:
	float sideA;
	float sideB;
	
	inline float inline_area(float sideA, float sideB) {
		return sideA*sideB;
	}
	
	inline float inline_circuit(float sideA, float sideB) {
	return 2*sideA+2*sideB;
	}
	
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	Rectangle prostokat;
	cout<<"pole prostok¹ta wynosi: "<<prostokat.inline_area(2, 4)<<"cm^2"<<endl;
	cout<<"obwód prostok¹ta wynosi: "<<prostokat.inline_circuit(2, 4)<<"cm"<<endl;
	
	
	
	return 0;
}
