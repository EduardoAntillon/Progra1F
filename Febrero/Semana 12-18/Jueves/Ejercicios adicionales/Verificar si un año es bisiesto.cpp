#include <iostream>
using namespace std;

int main() {
	int year;
	
	cout<<"Escribir un año para verificar si es bisiesto o no: ";
	cin>>year;cout<<endl;
	
	if(year%4==0){
		cout<<"El año es bisiesto."<<endl;
	}
	else{
		cout<<"El año no es bisiesto."<<endl;
	}
	return 0;
}

