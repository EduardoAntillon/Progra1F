#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout<<"Escribir un numero para verificar si es positivo o negativo: ";cin>>x;
	cout<<endl;
	
	if(x > 0){
		cout<<"El numero es positivo."<<endl;
	}
	if(x < 0){
		cout<<"El numero es negativo."<<endl;
	}
	if (x == 0){
		cout<<"El numero es cero."<<endl;
	}
	
	return 0;
}

