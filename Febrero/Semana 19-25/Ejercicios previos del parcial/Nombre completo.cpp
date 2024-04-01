#include <iostream>
using namespace std;

int main() {
	char nombre[100];
	
	cout<<"Escribir Nombre completo: ";cin.getline(nombre, 100, '\n');
	cout<<endl;
	cout<<"El nombre digitado es: "<<nombre;
	cout<<endl;
	
	return 0;
}

