#include <iostream>
using namespace std;

int main() {
	double num1, num2, num3;
	
	cout<<"Escribir tres numeros enteros para determinar cual es mayor."<<endl;
	cout<<endl;
	cout<<"Primer numero: ";cin>>num1;
	cout<<"Segundo numero: ";cin>>num2;
	cout<<"Tercer numero: ";cin>>num3;
	cout<<endl;
	if((num1 > num2)&&(num1 > num3)){
		cout<<"El primer numero es el mayor."<<endl;
	}
	else if((num2 > num1)&&(num2 > num3)){
		cout<<"El segundo numero es el mayor."<<endl;
	}
	else {
		cout<<"El tercer numero es el mayor."<<endl;
	}
	
	return 0;
}

