#include <iostream>
using namespace std;

void mostrarMensaje(int numero);

int global = 6;
	
int main() {
	int numero = 3;
	mostrarMensaje(numero);
	
	return 0;
}
void mostrarMensaje(int numero){
	int valor = 0;
	cout<<"El valor de la variable local de la funcion es: "<<valor<<endl;
	cout<<"El valor de la variable global de la funcion es: "<<global<<endl;
	cout<<"El valor de la variable parametro de la funcion es: "<<numero<<endl;
}
