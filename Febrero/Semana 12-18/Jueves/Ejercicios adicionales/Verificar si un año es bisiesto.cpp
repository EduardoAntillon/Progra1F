#include <iostream>
using namespace std;

int main() {
	int year;
	
	cout<<"Escribir un a�o para verificar si es bisiesto o no: ";
	cin>>year;cout<<endl;
	
	if(year%4==0){
		cout<<"El a�o es bisiesto."<<endl;
	}
	else{
		cout<<"El a�o no es bisiesto."<<endl;
	}
	return 0;
}

