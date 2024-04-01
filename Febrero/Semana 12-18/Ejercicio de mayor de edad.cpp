#include <iostream>
using namespace std;

int main() {
	int edad;
	
	cout<<"Escribir edad: ";cin>>edad;cout<<endl;
	
	if(edad >= 18){
		cout<<"El usuario es mayor de edad."<<endl;
	}
	else{
		cout<<"El usuario es menor de edad."<<endl;
	}
	
	return 0;
}

