#include <iostream>
using namespace std;

int main() {
	int numero;
	
	cout<<"Escribir un número para verificar si es divisible entre 3: "<<endl;
	cin>>numero;cout<<endl;
	
	if(numero%3==0){
		cout<<"El número es divisible entre tres."<<endl;
	}
	else{
		cout<<"El número no es divisible entre tres."<<endl;
	}
	
	return 0;
}

