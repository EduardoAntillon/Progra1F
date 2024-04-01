#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	
	cout<<"Ingresar dos numeros para verificar cual si son diferentes: ";cout<<endl;
	cout<<"Primer numero: ";cin>>num1;cout<<endl;
	cout<<"Segundo numero: ";cin>>num2;cout<<endl;
	
	if(num1 != num2){
		cout<<"Los numeros son distintos."<<endl;
	}
	else{
		cout<<"Los numeros son iguales."<<endl;
	}
	
	
	return 0;
}

