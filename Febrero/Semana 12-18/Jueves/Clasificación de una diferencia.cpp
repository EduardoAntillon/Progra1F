#include <iostream>
using namespace std;

int main() {
	int x, y, diferencia;
	
	cout<<"Escribir dos números para clasificar su resta"<<endl;
	
	cout<<"Primer numero: ";cin>>x;
	cout<<endl;
	cout<<"Segundo numero: ";cin>>y;
	cout<<endl;	
	diferencia = x - y;
	
	if(diferencia < 0){
		cout<<"La diferencia es menor a cero"<<endl;
	}
	if(diferencia > 0){
		cout<<"La diferencia es mayor a cero"<<endl;
	}
	if(diferencia == 0){
		cout<<"La diferencia es igual a cero"<<endl;
	}
	
	return 0;
}

