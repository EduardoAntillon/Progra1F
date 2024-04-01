#include <iostream>
using namespace std;

int main() {
	char letra;
	
	cout<<"Ingresar una letra para determinar si es mayuscula o minuscula: ";
	cin>>letra;
	cout<<endl;
	
	if((letra>=65)&&(letra<=90)){
		cout<<"La letra es mayuscula."<<endl;
	}
	else if((letra>=97)&&(letra<=122)){
		cout<<"La letra es minuscula."<<endl;
	}
	else{
		cout<<"Caracter no permitido."<<endl;
	}
	
	return 0;
}

