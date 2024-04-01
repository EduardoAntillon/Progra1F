#include <iostream>
using namespace std;

int main() {
	int x, y, residuo, cociente;
	
	cout<<"Introducir dos números para dividir y mostrar su residuo por aparte";
	cout<<endl;
	
	cout<<"Primer numero: ";cin>>x;
	cout<<"Segundo numero: ";cin>>y;
	
	cociente = x/y;
	
	residuo = x%y;
	
	cout<<"El cociente es: "<<cociente<<" con residuo: "<<residuo;
	cout<<endl;	

	return 0;
}

