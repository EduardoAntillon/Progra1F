#include <iostream>
using namespace std;

int main() {
	double dato, conversion;
	int opcion;
	
	cout<<"Ingrese opci�n de conversi�n: "<<endl;
	cout<<endl;
	cout<<"Kil�metros a metros. (1)"<<endl;
	cout<<"Metros a Kil�metros. (2)"<<endl;
	cout<<"Pies a pulgadas. (3)"<<endl;
	cout<<"Pulgadas a pies. (4)"<<endl;
	cout<<"Kil�metros a millas. (5)"<<endl;
	cout<<endl;
	cout<<"Opci�n: ";cin>>opcion;
	
	if(opcion == 1){
		cout<<"Ingresar dato: ";cin>>dato;
		conversion = dato * 1000;
		cout<<"La conversi�n es de: "<<conversion<<" m"<<endl;
	}
	else if(opcion == 2){
		cout<<"Ingresar dato: ";cin>>dato;
		conversion = dato * 0.001;
		cout<<"La conversi�n es de: "<<conversion<<" Km"<<endl;
	}
	else if(opcion == 3){
		cout<<"Ingresar dato: ";cin>>dato;
		conversion = dato * 12;
		cout<<"La conversi�n es de: "<<conversion<<" in"<<endl;
	}
	else if(opcion == 4){
		cout<<"Ingresar dato: ";cin>>dato;
		conversion = dato * 0.08333;
		cout<<"La conversi�n es de: "<<conversion<<" ft"<<endl;
	}
	
	
	
	return 0;
}

