#include <iostream>
using namespace std;

int main() {
	int x, y, z, suma;
	
	cout<<"Escribir tres números para hallar la suma de los prmeros dos con la diferencia del tercero: "<<endl;
	
	cout<<"Primer numero: ";cin>>x;
	cout<<endl;
	cout<<"Segundo numero: ";cin>>y;
	cout<<endl;
	cout<<"Tercer numero: ";cin>>z;
	cout<<endl;	
	
	suma = x + y - z;
	
	cout<<"La suma es: "<<suma<<endl;
	
	return 0;
}

