#include <iostream>
using namespace std;

int main() {
	int eleccion;
	double valor, conversion;
	
	cout<<"Elegir una opcion de conversion: "<<endl;
	cout<<endl;
	cout<<"Millas a yardas.(1)."<<endl;
	cout<<"Millas a pies.(2)."<<endl;
	cout<<"Millas a pulgadas.(3)."<<endl;
	cout<<"Opcion: ";cin>>eleccion;cout<<endl;
	
	if(eleccion==1){
		cout<<"Ingresar valor: ";cin>>valor;
		conversion = valor * 1760;
		cout<<"El valor en yardas es: "<<conversion<<endl;
	}
	else if(eleccion==2){
		cout<<"Ingresar valor: ";cin>>valor;
		conversion = valor * 5280;
		cout<<"El valor en pies es: "<<conversion<<endl;
	}
	else if(eleccion==3){
		cout<<"Ingresar valor: ";cin>>valor;
		conversion = valor * 63360;
		cout<<"El valor en pulgadas es: "<<conversion<<endl;
	}
	else{
		cout<<"Opcion no existente."<<endl;
	}
	
	
	
	
	
	return 0;
}

