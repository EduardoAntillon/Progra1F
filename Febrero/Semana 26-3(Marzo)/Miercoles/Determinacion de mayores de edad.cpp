#include <iostream>
using namespace std;

int main() {
	int edad_1, edad_2;
	
	cout<<"Ingresar dos edades para verificar cuales son mayores de edad."<<endl;
	
	cout<<"Primer edad: ";cin>>edad_1;
	cout<<"Segunda edad: ";cin>>edad_2;
	cout<<endl;
	
	if((edad_1)>=18 && (edad_2)>=18){
		cout<<"Ambos usuarios son mayores de edad."<<endl;
	}
	else if((edad_1 < 18)||(edad_2 < 18) ){
		cout<<"Solo uno de los dos es mayor de edad."<<endl;
	}
	
	return 0;
}

