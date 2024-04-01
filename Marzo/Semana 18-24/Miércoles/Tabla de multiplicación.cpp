#include <iostream>
using namespace std;

int main() {
	int num, i, producto;

	cout<<"Ingresar un numero para mostrar su tabla de multiplicar: ";cin>>num;
	cout<<endl;
	
	cout<<"La tabla de multiplicacion del numero digitado es: "<<endl;
	cout<<endl;
	for(i=1;i<=10;i++){
		producto = num*i;
		
		cout<<num<<"*"<<i<<" = "<<producto<<endl;
	}
	
	
	return 0;
}

