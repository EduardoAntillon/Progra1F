#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout<<"Ingresar un número entero para determinar su signo y si es par o impar: ";
	cin>>numero;
	cout<<endl;
	
	if(numero > 0){
		cout<<"El número es positivo."<<endl;
	}
	if(numero < 0){
		cout<<"El número es negativo."<<endl;
	}
	if(numero == 0){
		cout<<"El numero es cero. "<<endl;
	}
	if(numero%2 == 0){
		cout<<"El número es par."<<endl;
	}
	else{
		cout<<"El número es impar."<<endl;
	}
	
	return 0;
}

