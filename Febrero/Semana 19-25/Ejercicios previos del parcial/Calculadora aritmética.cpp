#include <iostream>
using namespace std;

int main() {
	double x, y, resultado;
	int operacion;
	
	cout<<"Introducir dos n�meros racionales: "<<endl;
	cout<<"Primer n�mero: ";cin>>x;cout<<endl;
	cout<<"Segundo n�mero: ";cin>>y;cout<<endl;
	cout<<"Operaciones posibles por elegir: "<<endl;
	cout<<"1: suma."<<endl;
	cout<<"2: resta."<<endl;
	cout<<"3: producto."<<endl;
	cout<<"4: Divisi�n."<<endl;
	cout<<"Seleccionar operaci�n : ";cin>>operacion;cout<<endl;
	cout<<endl;
	
	switch (operacion){
		case 1:
			resultado = x + y;
			cout<<"La suma es: "<<resultado<<endl;
			break;
			
		case 2:
			resultado = x - y;
			cout<<"La resta es: "<<resultado<<endl;
			break;
		
		case 3:
			resultado = x * y;
			cout<<"El producto es: "<<resultado<<endl;
			break;
		
		case 4:
			resultado = x / y;
			cout<<"El cociente es: "<<resultado<<endl;
			break;
	}
	return 0;
}

