#include <iostream>
#include<string>
using namespace std;

int main() {
	string cadena_1, cadena_2;
	
	cout<<"Introducir dos cadenas de texto para compararlas: "<<endl;
	cout<<"Primer cadena: ";cin>>cadena_1;
	cout<<"Segunda cadena: ";cin>>cadena_2;
	cout<<endl;
	
	if(cadena_1 == cadena_2){
		cout<<"Ambas cadenas son iguales."<<endl;
	}
	else{
		cout<<"Las cadenas no son iguales."<<endl;
	}
	
	return 0;
}

