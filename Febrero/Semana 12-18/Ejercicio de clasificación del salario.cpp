#include<iostream>

using namespace std;

int main(){
	
	float salario;
	
	cout<<"Introducir salario: ";cin>>salario;cout<<endl;
	
	if(salario == 2800){
		cout<<"El salario digitado es el m�nimo."<<endl;
	}
	if(salario > 2800){
		cout<<"El salario digitado es mayor al m�nimo."<<endl;
	}
	if(salario < 2800){
		cout<<"El salario digitado es menor al m�nimo."<<endl;
	}
	return 0;
}
	
