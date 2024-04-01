#include <iostream>
using namespace std;

int main() {
	double dato, conversion;
	int opcion;
	
	cout<<"Ingrese opción de conversión: "<<endl;
	cout<<endl;
	cout<<"Kilómetros a metros. (1)"<<endl;
	cout<<"Metros a Kilómetros. (2)"<<endl;
	cout<<"Pies a pulgadas. (3)"<<endl;
	cout<<"Pulgadas a pies. (4)"<<endl;
	cout<<"Kilómetros a millas. (5)"<<endl;
	cout<<endl;
	cout<<"Opción: ";cin>>opcion;
	
	if(opcion == 1){
		cout<<"Ingresar dato: ";cin>>dato;
		conversion = dato * 1000;
		cout<<"La conversión es de: "<<conversion<<" m"<<endl;
	}
	else if(opcion == 2){
		cout<<"Ingresar dato: ";cin>>dato;
		conversion = dato * 0.001;
		cout<<"La conversión es de: "<<conversion<<" Km"<<endl;
	}
	else if(opcion == 3){
		cout<<"Ingresar dato: ";cin>>dato;
		conversion = dato * 12;
		cout<<"La conversión es de: "<<conversion<<" in"<<endl;
	}
	else if(opcion == 4){
		cout<<"Ingresar dato: ";cin>>dato;
		conversion = dato * 0.08333;
		cout<<"La conversión es de: "<<conversion<<" ft"<<endl;
	}
	
	
	
	return 0;
}

