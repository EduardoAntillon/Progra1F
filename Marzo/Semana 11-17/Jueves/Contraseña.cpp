#include <iostream>
using namespace std;

int main() {
	int contrasena;
	
	cout<<"Ingrese una una contraseņa: ";cin>>contrasena;
	cout<<endl;
	
	if(((contrasena-10000)>=0)&&(contrasena%2!=0)&&(contrasena%3==0)){
		cout<<"La contraseņa es correcta."<<endl;
	}
	else{
		cout<<"La contraseņa es incorrecta."<<endl;
	}
	
	return 0;
}

