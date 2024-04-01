#include <iostream>
using namespace std;

int main() {
	int x, y, operacion, resultado;
	
	cout<<"Introduzca dos numeros enteros para operar: ";cout<<endl;
	cout<<"1er numero: ";cin>>x;
	cout<<"2do numero: ";cin>>y;
	cout<<endl;
	cout<<"Elija operacion aritmetica a realizar: "<<endl;
	cout<<"1. Suma."<<endl;
	cout<<"2. Resta. "<<endl;
	cout<<endl;
	cin>>operacion;cout<<endl;
	
	if(operacion==1){
		resultado = x + y;
		cout<<"La suma es: "<<resultado<<endl;
	}
	if(operacion==2){
		resultado = x - y;
		cout<<"La resta es: "<<resultado<<endl;
	}
	
	
	return 0;
}

