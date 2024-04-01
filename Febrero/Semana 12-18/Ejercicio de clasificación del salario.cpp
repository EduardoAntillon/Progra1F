#include<iostream>

using namespace std;

int main(){
	
	float salario;
	
	cout<<"Introducir salario: ";cin>>salario;cout<<endl;
	
	if(salario == 2800){
		cout<<"El salario digitado es el mínimo."<<endl;
	}
	if(salario > 2800){
		cout<<"El salario digitado es mayor al mínimo."<<endl;
	}
	if(salario < 2800){
		cout<<"El salario digitado es menor al mínimo."<<endl;
	}
	return 0;
}
	
