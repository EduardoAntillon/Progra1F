#include <iostream>
using namespace std;

int main() {
	int salario;
	
	cout<<"Ingresar salario para calcular la cantidad de impuestos a pagar: ";
	cin>>salario;
	
	if(salario <= 15000){
		cout<<"El porcentaje a pagar es del: 5%"<<<<endl;
	}
	else if((salario >= 15001)&&(salario <= 3000)){
		cout<<"El porcentaje a pagar es del: 12%"<<endl;
	}
	else if(salario >= 3001){
		cout<<"El porcentaje a pagar es del: 21%"<<endl;
	}
	
	return 0;
}

