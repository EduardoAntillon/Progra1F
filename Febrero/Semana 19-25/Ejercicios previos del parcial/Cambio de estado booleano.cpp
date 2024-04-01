#include <iostream>
using namespace std;

int main() {
	char bandera;
	bool status = false;
	
	cout<<"Introducir s o n para conocer el valor booleano en un estado: ";
	cout<<endl;
	cin>>bandera;
	
	if(bandera == 's'){
		status = true;
		cout<<"El estado booleano es: "<<status<<endl;
	}
	else if(bandera == 'n'){
		cout<<"El estado booleano es: "<<status<<endl;
	}
	else{
		cout<<"La letra digitada no es correcta."<<endl;
	}
	
	return 0;
}

