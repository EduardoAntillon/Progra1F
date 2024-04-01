#include <iostream>
using namespace std;

int main() {
	double bono, salario;
	int periodo;
	
	cout<<"Ingresar salario: ";cin>>salario;
	cout<<"Ingresar años en la empresa: ";cin>>periodo;
	
	if((periodo>=1)&&(periodo<=5)){
		bono = salario*0.05;
		cout<<"El bono será de: "<<bono<<" Quetzales."<<endl;
 	}
	if(periodo > 5){
		bono = salario*0.10;
		cout<<"El bono será de: "<<bono<<" Quetzales."<<endl;
	}
	
	return 0;
}

