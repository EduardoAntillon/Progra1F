#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout<<"Ingresar un n�mero entero para determinar su signo y si es par o impar: ";
	cin>>numero;
	cout<<endl;
	
	if(numero > 0){
		cout<<"El n�mero es positivo."<<endl;
	}
	if(numero < 0){
		cout<<"El n�mero es negativo."<<endl;
	}
	if(numero == 0){
		cout<<"El numero es cero. "<<endl;
	}
	if(numero%2 == 0){
		cout<<"El n�mero es par."<<endl;
	}
	else{
		cout<<"El n�mero es impar."<<endl;
	}
	
	return 0;
}

