#include <iostream>
using namespace std;

string cifrar(const string & cadena);
int Contrasena(int contrasena, numero, contrCifradaSum, contrCifradaMult);

int main() {
	int contrasena, numero, contrCifradaSum, contrCifradaMult;
	
	cout<<"Digite una contraseņa para cifrarla: ";cin>>contrasena;
	cout<<endl;
	cout<<"Ingrese un numero entero: ";cin>>numero;
	
	contrCifradaSum = contrasena + numero;
	contrCifradaMult = contrCifradaSum * numero;
	
	cout<<"Contraseņa cifrada: "<<contrCifradaMult;
	
	return 0;
}

