#include <iostream>
using namespace std;

int main() {
	char cadena_1[100], cadena_2[100];
	
	cout<<"Ingresar dos cadenas de texto para verificar si son iguales o no."<<endl;
	
	cin.getline(cadena_1, 100, '\n');cout<<endl;
	cin.getline(cadena_2, 100, '\n');cout<<endl;
	
	if(cadena_1==cadena_2){
		cout<<"Las cadenas de texto son iguales."<<endl;
	}
	else{
		cout<<"Las cadenas de texto no son iguales."<<endl;
	}
	
	return 0;
}

