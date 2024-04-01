#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout<<"Ingresar edad del usuario: ";cin>>x;
	
	if(x>=18){
		cout<<"El usuario es mayor de edad."<<endl;
	}
	else{
		cout<<"El usuario es menor de edad."<<endl;
	}
	
	return 0;
}

