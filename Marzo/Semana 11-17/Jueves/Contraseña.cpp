#include <iostream>
using namespace std;

int main() {
	int contrasena;
	
	cout<<"Ingrese una una contrase�a: ";cin>>contrasena;
	cout<<endl;
	
	if(((contrasena-10000)>=0)&&(contrasena%2!=0)&&(contrasena%3==0)){
		cout<<"La contrase�a es correcta."<<endl;
	}
	else{
		cout<<"La contrase�a es incorrecta."<<endl;
	}
	
	return 0;
}

