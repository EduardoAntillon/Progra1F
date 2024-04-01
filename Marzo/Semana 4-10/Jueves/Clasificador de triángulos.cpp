#include <iostream>
using namespace std;

int main() {
	double lado_1, lado_2, lado_3;
	
	cout<<"Ingresar tres lados de un triángulo para determinar si es equilátero, isósceles o escaleno. "<<endl;
	
	cout<<"Primer lado: ";cin>>lado_1;
	cout<<"Segundo lado: ";cin>>lado_2;
	cout<<"Tercer lado: ";cin>>lado_3;
	cout<<endl;
	if((lado_1 == lado_2)&&(lado_2 == lado_3)){
		cout<<"El triángulo es equilátero. "<<endl;
	}
	if((lado_1==lado_2)&&(lado_1!=lado_3)&&(lado_2!=lado_3)){
		cout<<"El triángulo es isósceles. "<<endl;
	}
	if((lado_2==lado_3)&&(lado_2!=lado_1)&&(lado_3!=lado_1)){
		cout<<"El triángulo es isósceles. "<<endl;
	}
	if((lado_1==lado_3)&&(lado_1!=lado_2)&&(lado_3!=lado_2)){
		cout<<"El triángulo es isósceles. "<<endl;
	}
	if((lado_1!=lado_2)&&(lado_2!=lado_3)){
		cout<<"El triángulo es escaleno. "<<endl;
	}
	
	return 0;
}

