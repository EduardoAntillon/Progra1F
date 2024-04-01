#include <iostream>
using namespace std;

int main() {
	int num1, num2;

	cout<<"Ingresar dos numeros para verificar cual es mayor: ";cout<<endl;
	cout<<"Primer numero: ";cin>>num1;cout<<endl;
	cout<<"Segundo numero: ";cin>>num2;cout<<endl;
	
	if(num1 > num2){
		cout<<"El primer numero es mayor al segundo."<<endl;
	}
	if(num1 < num2){
		cout<<"El Segundo numero es mayor al primero."<<endl;
	}
	
	return 0;
}

