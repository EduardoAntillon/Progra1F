#include <iostream>
using namespace std;

int main() {
	double lado_1, lado_2, lado_3;
	
	cout<<"Ingresar tres lados de un tri�ngulo para determinar si es equil�tero, is�sceles o escaleno. "<<endl;
	
	cout<<"Primer lado: ";cin>>lado_1;
	cout<<"Segundo lado: ";cin>>lado_2;
	cout<<"Tercer lado: ";cin>>lado_3;
	cout<<endl;
	if((lado_1 == lado_2)&&(lado_2 == lado_3)){
		cout<<"El tri�ngulo es equil�tero. "<<endl;
	}
	if((lado_1==lado_2)&&(lado_1!=lado_3)&&(lado_2!=lado_3)){
		cout<<"El tri�ngulo es is�sceles. "<<endl;
	}
	if((lado_2==lado_3)&&(lado_2!=lado_1)&&(lado_3!=lado_1)){
		cout<<"El tri�ngulo es is�sceles. "<<endl;
	}
	if((lado_1==lado_3)&&(lado_1!=lado_2)&&(lado_3!=lado_2)){
		cout<<"El tri�ngulo es is�sceles. "<<endl;
	}
	if((lado_1!=lado_2)&&(lado_2!=lado_3)){
		cout<<"El tri�ngulo es escaleno. "<<endl;
	}
	
	return 0;
}

