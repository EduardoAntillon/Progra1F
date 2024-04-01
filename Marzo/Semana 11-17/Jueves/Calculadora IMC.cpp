#include <iostream>
using namespace std;

int main() {
	double imc, peso, altura;
	
	cout<<"Introducir altura y peso para determinar su IMC: "<<endl;
	cout<<endl;
	cout<<"Peso en (Kg): ";cin>>peso;cout<<endl;
	cout<<"Altura en (m): ";cin>>altura;cout<<endl;
	
	imc = peso/(altura*altura);
	
	if(imc<18.5){
		cout<<"Peso bajo."<<endl;
	}
	else if((imc>=18.5)&&(imc<=25)){
		cout<<"Peso normal."<<endl;
	}
	else if((imc>=25)&&(imc<=30)){
		cout<<"Sobrepeso."<<endl;
	}
	else if(imc > 30){
		cout<<"Obesidad."<<endl;
	}
	
	return 0;
}

