#include <iostream>
using namespace std;

int main() {
	double x, y;
	
	cout<<"Ingresar dos numeros para verificar si son iguales o no."<<endl;
	
	cout<<"Primer numero: ";cin>>x;
	cout<<"Segundo numero: ";cin>>y;
	
	if(x!=y){
		cout<<"Los numeros son distintos."<<endl;
	}
	else{
		cout<<"Los numeros son iguales."<<endl;
	}
	
	return 0;
}

