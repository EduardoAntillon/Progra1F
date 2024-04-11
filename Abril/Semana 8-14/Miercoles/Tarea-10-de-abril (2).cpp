#include <iostream>
using namespace std;

void Datos();
double FuncionSuma(double num1, double num2, double num3);

double num1, num2, num3;

int main() {
	
	Datos();
	FuncionSuma(num1,num2,num3);
	
	
	return 0;
}
void Datos(){
	cout<<"Ingrese tres numeros decimales para sumarlos: "<<endl;
	cout<<endl;
	cout<<"Primer numero: ";cin>>num1;
	cout<<"Segundo numero: ";cin>>num2;
	cout<<"Tercer numero: ";cin>>num3;
	cout<<endl;
}
double FuncionSuma(double num1, double num2, double num3){
	double suma;
	suma = num1+num2+num3;
 	cout<<"La suma es: "<<suma;
	
	return suma;
}
