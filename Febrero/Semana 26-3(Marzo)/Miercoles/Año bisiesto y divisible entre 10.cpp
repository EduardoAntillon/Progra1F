#include <iostream>
using namespace std;

int main() {
	int year;
	
	cout<<"Escribir un a�o para verificar si es bisiesto y divisible entre 10: ";
	cin>>year;cout<<endl;
	
	if ((year%4==0)&&(year%10==0)){
		cout<<"El a�o es bisiesto y divisible entre 10."<<endl;
	}
	else {
		cout<<"El a�o no cumple ambas condiciones."<<endl;
	}
	
	return 0;
}

