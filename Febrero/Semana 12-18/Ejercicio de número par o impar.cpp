#include <iostream>

using namespace std;

int main(){
	
	int numero;
	
	cout<<"Escribir un n�mero para verificar si es par o no: ";cin>>numero;
	cout<<endl;
	
	if(numero%2==0){
		cout<<"El n�mero es par"<<endl; 
	}
	else{
		cout<<"El n�mero es impar"<<endl;		
	}
	
	return 0;
}

