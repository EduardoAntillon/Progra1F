#include <iostream>
using namespace std;

int main() {
	int x, y, i, potencia = 1;
	
	cout<<"Escribir dos numeros, un numero como base y otro como exponente: "<<endl;
	cout<<"Primer numero: ";cin>>x;cout<<endl;
	cout<<"Segundo numero: ";cin>>y;cout<<endl;
	
	if((y==10)&&(x==10)){
		cout<<"No se permiten numeros muy extensos."<<endl;
	}
	else{
		for(i=1;i<=y;i++){
			potencia*=x;
		}
		
		cout<<"La potencia es: "<<potencia<<endl;
	}
	
	return 0;
}

