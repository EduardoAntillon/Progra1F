#include <iostream>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"Escribir un número para verificar si es par o no: ";cin>>numero;
	cout<<endl;
	
	if(numero%2==0){
		cout<<"El número es par"<<endl; 
	}
	else{
		cout<<"El número es impar"<<endl;		
	}
	
	return 0;
}

