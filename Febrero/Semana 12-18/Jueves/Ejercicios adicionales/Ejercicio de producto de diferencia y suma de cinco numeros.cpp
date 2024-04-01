#include <iostream>
using namespace std;

int main() {
	int vector[5], suma, diferencia, resultado, i;
	
	cout<<"Ingresar 5 numeros para operarlos como sigue: num.1 - num.5 y num.2 + num.3 + num.4, luego expresar el producto de las operaciones hechas por separado";
	cout<<endl;
	
	for(i=0;i<5;i++){
		cout<<"Ingresar un numero: ";cin>>vector[i];
	}
	diferencia = vector[0] - vector[4];
	suma = vector[1] + vector[2] + vector[3];
	
	resultado = diferencia*suma;
	
	cout<<"El resultado final es: "<<resultado;
	
	return 0;
}

