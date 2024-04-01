#include <iostream>
using namespace std;

int main() {
	int i, numero, num_veces;
	
	cout<<"Escribir un numero para verificar si es un numero primo: ";cin>>numero;
	cout<<endl;
	
	if(numero==2){
		cout<<"El numero es primo."<<endl;
	}
	else{
		for(i=1;i<numero;i++){
			while(numero%i==0){
				num_veces = i++;
			}
		}
		if(num_veces==1){
			cout<<"El numero es primo."<<endl;
		}
		else{
			cout<<"El numero no es primo."<<endl;
		}
	}
	
	
	return 0;
}

