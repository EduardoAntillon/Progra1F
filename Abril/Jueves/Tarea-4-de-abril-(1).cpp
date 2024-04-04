#include <iostream>
using namespace std;

int main() {
	double num1, num2, resultado;
	int operacion, control = 1;
	
	do{
		cout<<"Ingrese dos numeros para operar: "<<endl;
		cout<<endl;
		cout<<"Primer numero: ";cin>>num1;cout<<endl;
		cout<<"Segundo numero: ";cin>>num2;cout<<endl;;
		cout<<"Eliga una operacion aritmetica: "<<endl;
		cout<<"Suma (1)."<<endl;;
		cout<<"Resta (2)."<<endl;;
		cout<<"Multiplicacion (3)."<<endl;
		cout<<"Division (4)."<<endl;
		cout<<"Opcion: ";cin>>operacion;
		cout<<endl;
		switch(operacion){
		case 1: 
			resultado = num1 + num2;
			cout<<"La suma es: "<<resultado<<endl<<endl;break;
		case 2:
			resultado = num1 - num2;
			cout<<"La resta es: "<<resultado<<endl<<endl;break;
		case 3:
			resultado = num1 * num2;
			cout<<"El producto  es: "<<resultado<<endl<<endl;break;
		case 4: 
			resultado = num1 / num2;
			cout<<"El cociente es: "<<resultado<<endl<<endl;break;
		default: 
			cout<<"Opcion no valida."<<endl<<endl;break;
		};
		cout<<"¿Desea repetir el menu?"<<endl;
		cout<<"Si.(1)"<<endl;
		cout<<"No.(0)"<<endl;
		cin>>control;
		
		if(control==0){
			cout<<"Calculadora finalizada."<<endl;	
		}
		else if((control!=1)&&(control!=0)){
			cout<<"Opcion no valida."<<endl;
		}
		
	} while(control==1);
	
	return 0;
}

